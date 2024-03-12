`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
module adder #(
    parameter ADDR_WIDTH = 3, //because it is word addressed and then we do not need to think about the last two bits. (was 2)
    parameter DATA_WIDTH = 32,
    parameter GRANULE = 8,
    parameter REGISTER_NUM = 4,
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

assign enable = (cyc_i)&&(stb_i)&&(!we_i);

always @ (posedge clk_i or posedge  rst_i) begin
    if (rst_i)
	begin
       reg_dat_o[0] <= 32'h00000001; //op1
       reg_dat_o[1] <= 32'h00000002;
       reg_dat_o[2] <= 32'h00000003; //ctrl
       reg_dat_o[3] <= 32'h00000004;
       reg_ack_o <= 1'b0;
	end
	else if (enable) begin
	   reg_ack_o <= 1'b1;
	end else begin
	   reg_ack_o <= 1'b0;
	end
end

assign dat_o = (enable && (adr_i == 3'b001))? reg_dat_o[0]:
                (enable && (adr_i == 3'b010))? reg_dat_o[1]:
                (enable && (adr_i == 3'b011))? reg_dat_o[2]:
                (enable && (adr_i == 3'b100))? reg_dat_o[3]:
                                                  32'h00000000;

assign ack_o = reg_ack_o;

endmodule
