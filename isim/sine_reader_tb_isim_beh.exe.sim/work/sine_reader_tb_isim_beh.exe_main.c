/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002129617870_0384722129_init();
    work_m_00000000003349729749_0439645096_init();
    work_m_00000000000036348317_2571492256_init();
    work_m_00000000003349729749_1399510071_init();
    work_m_00000000004055417567_4217931122_init();
    work_m_00000000003349729749_4207975584_init();
    work_m_00000000001635077462_3453606180_init();
    work_m_00000000002014633050_2602385841_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002014633050_2602385841");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
