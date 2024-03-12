`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
module adder #(
    parameter ADDR_WIDTH = 3, //because it is word addressed and then we do not need to think about the last two bits. (was 2)
    parameter DATA_WIDTH = 32,
    parameter GRANULE = 8,
    parameter REGISTER_NUM = 5,
    localparam SEL_WIDTH = DATA_WIDTH / GRANULE
)(
    input wire rst_i,
    input wire clk_i,
    input wire [ADDR_WIDTH-1:0] adr_i,
    input wire [DATA_WIDTH-1:0] dat_i,
    output wire [DATA_WIDTH-1:0] dat_o,
    input wire [SEL_WIDTH-1:0] sel_i,
    input wire we_i,
    input wire stb_i,
    output wire ack_o,
    output wire err_o,
    input wire cyc_i
);

wire enable;

reg [DATA_WIDTH-1:0] reg_dat_o [0:REGISTER_NUM-1];
reg reg_ack_o;

assign enable = (cyc_i)&&(stb_i);

always @ (posedge clk_i or posedge  rst_i) begin
    if (rst_i)
	begin
       reg_dat_o[0] <= 32'h00000000; //op1
       reg_dat_o[1] <= 32'h00000000; //op2
       reg_dat_o[2] <= 32'h00000000; //ctrl
       //reg_dat_o[3] <= 32'h00000000;
       reg_ack_o <= 1'b0;
	end
	else if (enable) begin
	   reg_ack_o <= 1'b1;
	   if(we_i) begin
           case(adr_i)
               3'b001: reg_dat_o[0] <= dat_i;
               3'b010: reg_dat_o[1] <= dat_i;
               3'b011: reg_dat_o[2] <= dat_i;
               //3'b100: reg_dat_o[3] <= dat_i;
               // ...
               default: begin
                   reg_dat_o[0] <= reg_dat_o[0]; //op1
                   reg_dat_o[1] <= reg_dat_o[1]; //op2
                   reg_dat_o[2] <= reg_dat_o[2]; //ctrl
                   //reg_dat_o[3] <= reg_dat_o[3];
               end
            endcase
	    end
	end else begin
	   reg_ack_o <= 1'b0;
	end
end

always @ (posedge clk_i or posedge  rst_i) begin
    if (rst_i)
	begin
       reg_dat_o[3] <= 32'h00000000; //op1
       reg_dat_o[4] <= 32'h00000000; //op2
	end else begin
	   if(reg_dat_o[2]==1) begin
           reg_dat_o[3] <= 32'h00000001; //status
           reg_dat_o[4] <= reg_dat_o[0] + reg_dat_o[1];
	   end
    end
end

assign dat_o = (enable && !we_i && (adr_i == 3'b001))? reg_dat_o[0]:
                (enable && !we_i && (adr_i == 3'b010))? reg_dat_o[1]:
                (enable && !we_i && (adr_i == 3'b011))? reg_dat_o[2]:
                (enable && !we_i && (adr_i == 3'b100))? reg_dat_o[3]:
                (enable && !we_i && (adr_i == 3'b101))? reg_dat_o[4]:
                                                  32'h00000000;

assign ack_o = reg_ack_o;

endmodule
