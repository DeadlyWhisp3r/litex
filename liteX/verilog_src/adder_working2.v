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

assign enable = (cyc_i)&&(stb_i)&&(!we_i);

assign dat_o = (enable && (adr_i == 3'b001))? 32'h00000001:
                (enable && (adr_i == 3'b010))? 32'h00000002:
                (enable && (adr_i == 3'b011))? 32'h00000003:
                (enable && (adr_i == 3'b100))? 32'h00000004:
                                                  32'h00000000;

assign ack_o = cyc_i;

endmodule
