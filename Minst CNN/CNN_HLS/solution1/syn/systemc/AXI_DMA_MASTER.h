// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _AXI_DMA_MASTER_HH_
#define _AXI_DMA_MASTER_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "cnn_mul_32s_32s_3bkb.h"
#include "cnn_mul_mul_16s_1cud.h"

namespace ap_rtl {

struct AXI_DMA_MASTER : public sc_module {
    // Port declarations 14
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<16> > stream_in_V_V_dout;
    sc_in< sc_logic > stream_in_V_V_empty_n;
    sc_out< sc_logic > stream_in_V_V_read;
    sc_out< sc_lv<16> > stream_out_TDATA;
    sc_out< sc_logic > stream_out_TVALID;
    sc_in< sc_logic > stream_out_TREADY;
    sc_out< sc_logic > stream_out_TLAST;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    AXI_DMA_MASTER(sc_module_name name);
    SC_HAS_PROCESS(AXI_DMA_MASTER);

    ~AXI_DMA_MASTER();

    sc_trace_file* mVcdFile;

    cnn_mul_32s_32s_3bkb<1,5,32,32,32>* cnn_mul_32s_32s_3bkb_U59;
    cnn_mul_32s_32s_3bkb<1,5,32,32,32>* cnn_mul_32s_32s_3bkb_U60;
    cnn_mul_mul_16s_1cud<1,3,16,16,32>* cnn_mul_mul_16s_1cud_U61;
    cnn_mul_mul_16s_1cud<1,3,16,16,32>* cnn_mul_mul_16s_1cud_U62;
    cnn_mul_mul_16s_1cud<1,3,16,16,32>* cnn_mul_mul_16s_1cud_U63;
    cnn_mul_mul_16s_1cud<1,3,16,16,32>* cnn_mul_mul_16s_1cud_U64;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<27> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<16> > stream_out_V_data_V_1_data_out;
    sc_signal< sc_logic > stream_out_V_data_V_1_vld_in;
    sc_signal< sc_logic > stream_out_V_data_V_1_vld_out;
    sc_signal< sc_logic > stream_out_V_data_V_1_ack_in;
    sc_signal< sc_logic > stream_out_V_data_V_1_ack_out;
    sc_signal< sc_lv<16> > stream_out_V_data_V_1_payload_A;
    sc_signal< sc_lv<16> > stream_out_V_data_V_1_payload_B;
    sc_signal< sc_logic > stream_out_V_data_V_1_sel_rd;
    sc_signal< sc_logic > stream_out_V_data_V_1_sel_wr;
    sc_signal< sc_logic > stream_out_V_data_V_1_sel;
    sc_signal< sc_logic > stream_out_V_data_V_1_load_A;
    sc_signal< sc_logic > stream_out_V_data_V_1_load_B;
    sc_signal< sc_lv<2> > stream_out_V_data_V_1_state;
    sc_signal< sc_logic > stream_out_V_data_V_1_state_cmp_full;
    sc_signal< sc_logic > stream_out_V_last_1_data_in;
    sc_signal< sc_logic > stream_out_V_last_1_data_out;
    sc_signal< sc_logic > stream_out_V_last_1_vld_in;
    sc_signal< sc_logic > stream_out_V_last_1_vld_out;
    sc_signal< sc_logic > stream_out_V_last_1_ack_in;
    sc_signal< sc_logic > stream_out_V_last_1_ack_out;
    sc_signal< sc_logic > stream_out_V_last_1_payload_A;
    sc_signal< sc_logic > stream_out_V_last_1_payload_B;
    sc_signal< sc_logic > stream_out_V_last_1_sel_rd;
    sc_signal< sc_logic > stream_out_V_last_1_sel_wr;
    sc_signal< sc_logic > stream_out_V_last_1_sel;
    sc_signal< sc_logic > stream_out_V_last_1_load_A;
    sc_signal< sc_logic > stream_out_V_last_1_load_B;
    sc_signal< sc_lv<2> > stream_out_V_last_1_state;
    sc_signal< sc_logic > stream_out_V_last_1_state_cmp_full;
    sc_signal< sc_logic > stream_in_V_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter1;
    sc_signal< bool > ap_block_pp1_stage0;
    sc_signal< sc_lv<1> > tmp_81_reg_335;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > tmp_82_reg_300;
    sc_signal< sc_logic > stream_out_TDATA_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter2;
    sc_signal< sc_lv<1> > tmp_81_reg_335_pp1_iter1_reg;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_lv<1> > tmp_82_reg_300_pp0_iter1_reg;
    sc_signal< sc_lv<31> > i1_reg_92;
    sc_signal< sc_lv<31> > i_reg_103;
    sc_signal< sc_lv<16> > reg_114;
    sc_signal< bool > ap_block_state1;
    sc_signal< bool > ap_block_state17_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state18_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state18_io;
    sc_signal< bool > ap_block_state19_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state19_io;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< bool > ap_block_state29_pp1_stage0_iter0;
    sc_signal< bool > ap_block_state30_pp1_stage0_iter1;
    sc_signal< bool > ap_block_state30_io;
    sc_signal< bool > ap_block_state31_pp1_stage0_iter2;
    sc_signal< bool > ap_block_state31_io;
    sc_signal< bool > ap_block_pp1_stage0_11001;
    sc_signal< sc_lv<16> > reg_119;
    sc_signal< sc_lv<1> > tmp_s_fu_124_p2;
    sc_signal< sc_lv<1> > tmp_s_reg_229;
    sc_signal< sc_lv<16> > tmp_V_101_reg_233;
    sc_signal< sc_lv<16> > tmp_V_102_reg_239;
    sc_signal< sc_lv<16> > tmp_V_105_reg_245;
    sc_signal< sc_lv<32> > lhs_V_fu_130_p1;
    sc_signal< sc_lv<32> > tmp_78_fu_137_p1;
    sc_signal< sc_lv<32> > rhs_V_fu_140_p1;
    sc_signal< sc_lv<32> > grp_fu_205_p2;
    sc_signal< sc_lv<32> > tmp5_reg_279;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<32> > grp_fu_211_p2;
    sc_signal< sc_lv<32> > tmp6_reg_284;
    sc_signal< sc_lv<32> > grp_fu_147_p2;
    sc_signal< sc_lv<32> > KER_bound_reg_289;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<32> > tmp_80_fu_151_p2;
    sc_signal< sc_lv<32> > tmp_80_reg_295;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<1> > tmp_82_fu_160_p2;
    sc_signal< sc_lv<31> > i_5_fu_165_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<1> > tmp_last_1_fu_171_p2;
    sc_signal< sc_lv<1> > tmp_last_1_reg_309;
    sc_signal< sc_lv<32> > grp_fu_217_p2;
    sc_signal< sc_lv<32> > tmp2_reg_314;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_lv<32> > grp_fu_223_p2;
    sc_signal< sc_lv<32> > tmp3_reg_319;
    sc_signal< sc_lv<32> > grp_fu_176_p2;
    sc_signal< sc_lv<32> > OFM_bound_reg_324;
    sc_signal< sc_logic > ap_CS_fsm_state27;
    sc_signal< sc_lv<32> > tmp_77_fu_180_p2;
    sc_signal< sc_lv<32> > tmp_77_reg_330;
    sc_signal< sc_logic > ap_CS_fsm_state28;
    sc_signal< sc_lv<1> > tmp_81_fu_189_p2;
    sc_signal< sc_lv<31> > i_13_fu_194_p2;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter0;
    sc_signal< sc_lv<1> > tmp_last_fu_200_p2;
    sc_signal< sc_lv<1> > tmp_last_reg_344;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state17;
    sc_signal< bool > ap_block_pp1_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp1_exit_iter0_state29;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< bool > ap_block_pp1_stage0_01001;
    sc_signal< sc_lv<16> > lhs_V_fu_130_p0;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<32> > i1_cast_fu_156_p1;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_lv<32> > i_cast_fu_185_p1;
    sc_signal< sc_lv<16> > grp_fu_205_p0;
    sc_signal< sc_lv<16> > grp_fu_211_p0;
    sc_signal< sc_lv<16> > grp_fu_211_p1;
    sc_signal< sc_lv<16> > grp_fu_217_p1;
    sc_signal< sc_lv<16> > grp_fu_223_p0;
    sc_signal< sc_lv<16> > grp_fu_223_p1;
    sc_signal< sc_logic > grp_fu_205_ce;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_logic > grp_fu_211_ce;
    sc_signal< sc_logic > grp_fu_217_ce;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_logic > grp_fu_223_ce;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< bool > ap_block_state20;
    sc_signal< sc_lv<27> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_logic > ap_idle_pp1;
    sc_signal< sc_logic > ap_enable_pp1;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<27> ap_ST_fsm_state1;
    static const sc_lv<27> ap_ST_fsm_state2;
    static const sc_lv<27> ap_ST_fsm_state3;
    static const sc_lv<27> ap_ST_fsm_state4;
    static const sc_lv<27> ap_ST_fsm_state5;
    static const sc_lv<27> ap_ST_fsm_state6;
    static const sc_lv<27> ap_ST_fsm_state7;
    static const sc_lv<27> ap_ST_fsm_state8;
    static const sc_lv<27> ap_ST_fsm_state9;
    static const sc_lv<27> ap_ST_fsm_state10;
    static const sc_lv<27> ap_ST_fsm_state11;
    static const sc_lv<27> ap_ST_fsm_state12;
    static const sc_lv<27> ap_ST_fsm_state13;
    static const sc_lv<27> ap_ST_fsm_state14;
    static const sc_lv<27> ap_ST_fsm_state15;
    static const sc_lv<27> ap_ST_fsm_state16;
    static const sc_lv<27> ap_ST_fsm_pp0_stage0;
    static const sc_lv<27> ap_ST_fsm_state20;
    static const sc_lv<27> ap_ST_fsm_state21;
    static const sc_lv<27> ap_ST_fsm_state22;
    static const sc_lv<27> ap_ST_fsm_state23;
    static const sc_lv<27> ap_ST_fsm_state24;
    static const sc_lv<27> ap_ST_fsm_state25;
    static const sc_lv<27> ap_ST_fsm_state26;
    static const sc_lv<27> ap_ST_fsm_state27;
    static const sc_lv<27> ap_ST_fsm_state28;
    static const sc_lv<27> ap_ST_fsm_pp1_stage0;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_1A;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<31> ap_const_lv31_0;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_FFFFFFFF;
    static const sc_lv<31> ap_const_lv31_1;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_11;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp1_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state21();
    void thread_ap_CS_fsm_state22();
    void thread_ap_CS_fsm_state23();
    void thread_ap_CS_fsm_state27();
    void thread_ap_CS_fsm_state28();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp1_stage0();
    void thread_ap_block_pp1_stage0_01001();
    void thread_ap_block_pp1_stage0_11001();
    void thread_ap_block_pp1_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state17_pp0_stage0_iter0();
    void thread_ap_block_state18_io();
    void thread_ap_block_state18_pp0_stage0_iter1();
    void thread_ap_block_state19_io();
    void thread_ap_block_state19_pp0_stage0_iter2();
    void thread_ap_block_state20();
    void thread_ap_block_state29_pp1_stage0_iter0();
    void thread_ap_block_state30_io();
    void thread_ap_block_state30_pp1_stage0_iter1();
    void thread_ap_block_state31_io();
    void thread_ap_block_state31_pp1_stage0_iter2();
    void thread_ap_condition_pp0_exit_iter0_state17();
    void thread_ap_condition_pp1_exit_iter0_state29();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_pp1();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp1();
    void thread_ap_ready();
    void thread_grp_fu_205_ce();
    void thread_grp_fu_205_p0();
    void thread_grp_fu_211_ce();
    void thread_grp_fu_211_p0();
    void thread_grp_fu_211_p1();
    void thread_grp_fu_217_ce();
    void thread_grp_fu_217_p1();
    void thread_grp_fu_223_ce();
    void thread_grp_fu_223_p0();
    void thread_grp_fu_223_p1();
    void thread_i1_cast_fu_156_p1();
    void thread_i_13_fu_194_p2();
    void thread_i_5_fu_165_p2();
    void thread_i_cast_fu_185_p1();
    void thread_lhs_V_fu_130_p0();
    void thread_lhs_V_fu_130_p1();
    void thread_rhs_V_fu_140_p1();
    void thread_stream_in_V_V_blk_n();
    void thread_stream_in_V_V_read();
    void thread_stream_out_TDATA();
    void thread_stream_out_TDATA_blk_n();
    void thread_stream_out_TLAST();
    void thread_stream_out_TVALID();
    void thread_stream_out_V_data_V_1_ack_in();
    void thread_stream_out_V_data_V_1_ack_out();
    void thread_stream_out_V_data_V_1_data_out();
    void thread_stream_out_V_data_V_1_load_A();
    void thread_stream_out_V_data_V_1_load_B();
    void thread_stream_out_V_data_V_1_sel();
    void thread_stream_out_V_data_V_1_state_cmp_full();
    void thread_stream_out_V_data_V_1_vld_in();
    void thread_stream_out_V_data_V_1_vld_out();
    void thread_stream_out_V_last_1_ack_in();
    void thread_stream_out_V_last_1_ack_out();
    void thread_stream_out_V_last_1_data_in();
    void thread_stream_out_V_last_1_data_out();
    void thread_stream_out_V_last_1_load_A();
    void thread_stream_out_V_last_1_load_B();
    void thread_stream_out_V_last_1_sel();
    void thread_stream_out_V_last_1_state_cmp_full();
    void thread_stream_out_V_last_1_vld_in();
    void thread_stream_out_V_last_1_vld_out();
    void thread_tmp_77_fu_180_p2();
    void thread_tmp_78_fu_137_p1();
    void thread_tmp_80_fu_151_p2();
    void thread_tmp_81_fu_189_p2();
    void thread_tmp_82_fu_160_p2();
    void thread_tmp_last_1_fu_171_p2();
    void thread_tmp_last_fu_200_p2();
    void thread_tmp_s_fu_124_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif