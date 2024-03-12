`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
module adder (
	input clk,
	input rst,
	input wb_cyc,
	input wb_stb,
	input wb_we,
	input [3:0] wb_adr,
	input [31:0] wb_dat_i,
	output wb_ack,
	output [31:0] wb_dat_o
	);
	
reg [31:0] memory [0:3];
reg reg_wb_ack;
reg [31:0] reg_wb_dat_o;

//write
always @(posedge clk or posedge rst)
    begin
    if (rst)
	begin
       memory[1] <= 32'h0000; //op1
       memory[2] <= 32'h0000;
       memory[3] <= 32'h0000; //ctrl
	end
	else if ((wb_cyc)&&(wb_stb)&&(wb_we))
	begin
		// Your write logic here, such as
		//memory[wb_adr[3:0]] <= wb_dat_i;
        case(wb_adr[3:0])
	       4'h4: memory[1] <= wb_dat_i;
	       4'h8: memory[2] <= wb_dat_i;
	       4'hc: memory[3] <= wb_dat_i;
	       // ...
	       default: begin
	           //memory[0] <= memory[0]; //res
               memory[1] <= memory[1]; //op1
	           memory[2] <= memory[2];
               memory[3] <= memory[3]; //ctrl
           end
	    endcase
	end
end

always @(posedge clk or posedge rst)
begin
	if (rst)
	begin
	   reg_wb_dat_o <= 0;
	end
	else begin
        case(wb_adr[3:0])
            4'h0: reg_wb_dat_o <= memory[0];
            4'h4: reg_wb_dat_o <= memory[1];
            4'h8: reg_wb_dat_o <= memory[2];
            4'hc: reg_wb_dat_o <= memory[3];
            // ...
            default: reg_wb_dat_o <= 0;
        endcase
    end
end

assign wb_dat_o = reg_wb_dat_o;

//ackknowledgement
always @(posedge clk or posedge(rst))
begin
    if (rst)
    begin
        reg_wb_ack <= 1'b0;
    end
    else begin
        reg_wb_ack <= wb_cyc;
    end
end

assign wb_ack = reg_wb_ack;

always @(posedge clk or posedge rst)
begin
    if(rst)
    begin
        memory[0] <= 32'h00000;
    end
    else if (memory[3][0])
    begin
        memory[0] <= memory[1]+memory[2];
    end
end

endmodule
