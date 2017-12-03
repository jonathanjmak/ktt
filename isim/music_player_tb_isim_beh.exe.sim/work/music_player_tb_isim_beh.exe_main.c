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
    work_m_00000000003349729749_4207975584_init();
    work_m_00000000003349729749_0923144499_init();
    work_m_00000000002629785510_0754342909_init();
    work_m_00000000003349729749_1248978294_init();
    work_m_00000000003349729749_0773660786_init();
    work_m_00000000000036348317_2153102842_init();
    work_m_00000000003349729749_1399510071_init();
    work_m_00000000004055417567_4217931122_init();
    work_m_00000000000154078800_2195893790_init();
    work_m_00000000003349729749_1311271543_init();
    work_m_00000000000036348317_2401929146_init();
    work_m_00000000002129617870_0384722129_init();
    work_m_00000000000036348317_2571492256_init();
    work_m_00000000002148930451_3453606180_init();
    work_m_00000000004059340069_3362593561_init();
    work_m_00000000003621626854_0232159019_init();
    work_m_00000000002129617870_0647936010_init();
    work_m_00000000003892093808_3280189585_init();
    work_m_00000000002129617870_3600076563_init();
    work_m_00000000002129617870_1891901324_init();
    work_m_00000000003061251649_2384560323_init();
    work_m_00000000003500327795_0928280328_init();
    work_m_00000000003349729749_3454663097_init();
    work_m_00000000002129617870_0388763366_init();
    work_m_00000000001696256784_3502597066_init();
    work_m_00000000003802708712_3732433453_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003802708712_3732433453");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}