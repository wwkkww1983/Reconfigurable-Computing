// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _rules_in_HH_
#define _rules_in_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct rules_in : public sc_module {
    // Port declarations 19
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > rule0_V_dout;
    sc_in< sc_logic > rule0_V_empty_n;
    sc_out< sc_logic > rule0_V_read;
    sc_in< sc_lv<32> > rule1_V_dout;
    sc_in< sc_logic > rule1_V_empty_n;
    sc_out< sc_logic > rule1_V_read;
    sc_in< sc_lv<32> > rule2_V_dout;
    sc_in< sc_logic > rule2_V_empty_n;
    sc_out< sc_logic > rule2_V_read;
    sc_out< sc_lv<32> > ap_return_0;
    sc_out< sc_lv<32> > ap_return_1;
    sc_out< sc_lv<32> > ap_return_2;


    // Module declarations
    rules_in(sc_module_name name);
    SC_HAS_PROCESS(rules_in);

    ~rules_in();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<1> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > rule0_V_blk_n;
    sc_signal< sc_logic > rule1_V_blk_n;
    sc_signal< sc_logic > rule2_V_blk_n;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<32> > ap_return_0_preg;
    sc_signal< sc_lv<32> > ap_return_1_preg;
    sc_signal< sc_lv<32> > ap_return_2_preg;
    sc_signal< sc_lv<1> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<1> ap_ST_fsm_state1;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_block_state1();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return_0();
    void thread_ap_return_1();
    void thread_ap_return_2();
    void thread_rule0_V_blk_n();
    void thread_rule0_V_read();
    void thread_rule1_V_blk_n();
    void thread_rule1_V_read();
    void thread_rule2_V_blk_n();
    void thread_rule2_V_read();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
