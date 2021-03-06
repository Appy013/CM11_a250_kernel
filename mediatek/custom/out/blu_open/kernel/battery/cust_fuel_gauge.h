#include <mach/mt_typedefs.h>

#define TEMPERATURE_T0                  110
#define TEMPERATURE_T1                  0
#define TEMPERATURE_T2                  25
#define TEMPERATURE_T3                  50
#define TEMPERATURE_T                   255 // This should be fixed, never change the value

#define FG_METER_RESISTANCE 	0

#define MAX_BOOTING_TIME_FGCURRENT	1*10 // 10s

#if defined(CONFIG_POWER_EXT)
#define OCV_BOARD_COMPESATE	72 //mV 
#define R_FG_BOARD_BASE		1000
#define R_FG_BOARD_SLOPE	1000 //slope
#else
#define OCV_BOARD_COMPESATE	0 //mV 
#define R_FG_BOARD_BASE		1000
#define R_FG_BOARD_SLOPE	1000 //slope
#endif

#define Q_MAX_POS_50	2073  //2490
#define Q_MAX_POS_25	2064  //2468
#define Q_MAX_POS_0	1548  //2310
#define Q_MAX_NEG_10	1440  //1858

#define Q_MAX_POS_50_H_CURRENT	2066  //2472
#define Q_MAX_POS_25_H_CURRENT	2049  //2430
#define Q_MAX_POS_0_H_CURRENT	1477  //1837
#define Q_MAX_NEG_10_H_CURRENT	860  //1030

#define R_FG_VALUE 				20 // mOhm, base is 20
#define CURRENT_DETECT_R_FG	10  //1mA

#define OSR_SELECT_7			0

#define CAR_TUNE_VALUE			93 //1.00

/////////////////////////////////////////////////////////////////////
// <DOD, Battery_Voltage> Table
/////////////////////////////////////////////////////////////////////
typedef struct _BATTERY_PROFILE_STRUC
{
    kal_int32 percentage;
    kal_int32 voltage;
} BATTERY_PROFILE_STRUC, *BATTERY_PROFILE_STRUC_P;

typedef enum
{
    T1_0C,
    T2_25C,
    T3_50C
} PROFILE_TEMPERATURE;

// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0[] =
{
    {0,   4322}, 
    {1,   4309}, 
    {3,   4298}, 
    {4,   4287}, 
    {5,   4276}, 
    {7,   4264}, 
    {8,   4253}, 
    {10,  4242}, 
    {11,  4231}, 
    {12,  4210}, 
    {14,  4203}, 
    {15,  4192}, 
    {16,  4178}, 
    {18,  4167}, 
    {19,  4157}, 
    {21,  4140}, 
    {22,  4130}, 
    {23,  4110}, 
    {25,  4090}, 
    {26,  4070}, 
    {27,  4050}, 
    {29,  4035}, 
    {30,  4025}, 
    {32,  4002}, 
    {33,  3980}, 
    {34,  3966}, 
    {36,  3953}, 
    {37,  3939}, 
    {38,  3928}, 
    {40,  3926}, 
    {41,  3921}, 
    {42,  3919}, 
    {44,  3900}, 
    {45,  3893}, 
    {47,  3888}, 
    {48,  3880}, 
    {49,  3875}, 
    {51,  3872}, 
    {52,  3865}, 
    {53,  3860}, 
    {55,  3855}, 
    {56,  3848}, 
    {58,  3842}, 
    {59,  3837}, 
    {60,  3832}, 
    {62,  3828}, 
    {63,  3821}, 
    {64,  3815}, 
    {66,  3809}, 
    {67,  3801}, 
    {68,  3794}, 
    {70,  3788}, 
    {71,  3782}, 
    {73,  3776}, 
    {74,  3769}, 
    {75,  3763}, 
    {77,  3756}, 
    {78,  3749}, 
    {79,  3743}, 
    {81,  3736}, 
    {82,  3731}, 
    {84,  3726}, 
    {85,  3721}, 
    {86,  3715}, 
    {88,  3708}, 
    {89,  3697}, 
    {90,  3684}, 
    {92,  3666}, 
    {93,  3642}, 
    {95,  3607}, 
    {96,  3561}, 
    {97,  3497}, 
    {99,  3399}, 
    {100, 3210}
        ,{100, 3210},
        {100, 3210},
        {100, 3210},
        {100, 3210},
        {100, 3210},
        {100, 3210},
        {100, 3210},
        {100, 3210},
        {100, 3210},
        {100, 3210},
        {100, 3210},
        {100, 3210},
        {100, 3210},
        {100, 3210},
        {100, 3210},
        {100, 3210},
        {100, 3210},
        {100, 3210},
        {100, 3210},
        {100, 3210},
        {100, 3210},
        {100, 3210},
        {100, 3210},
        {100, 3210},
        {100, 3210},
        {100, 3210},
        {100, 3210},
        {100, 3210},
        {100, 3210},
        {100, 3210},
        {100, 3210},
        {100, 3210},
        {100, 3210},
        {100, 3210},
        {100, 3210},
        {100, 3210}
};      
         
// T1 0C 
BATTERY_PROFILE_STRUC battery_profile_t1[] =
{   
    {0,   4319}, 
    {1,   4300},  
    {3,   4286},  
    {4,   4271},  
    {6,   4257},  
    {7,   4241},  
    {8,   4221},  
    {10,  4197},  
    {11,  4169},  
    {13,  4138},  
    {14,  4116},  
    {15,  4098},  
    {17,  4088},  
    {18,  4075},  
    {20,  4063},  
    {21,  4043},  
    {23,  4019},  
    {24,  3994},  
    {25,  3974},  
    {27,  3958},  
    {28,  3942},  
    {30,  3931},  
    {31,  3921},  
    {32,  3913},  
    {34,  3907},  
    {35,  3900},  
    {37,  3892},  
    {38,  3886},  
    {39,  3880},  
    {41,  3872},  
    {42,  3866},  
    {44,  3859},  
    {45,  3852},  
    {46,  3846},  
    {48,  3840},  
    {49,  3832},  
    {51,  3827},  
    {52,  3821},  
    {54,  3815},  
    {55,  3809},  
    {56,  3805},  
    {58,  3801},  
    {59,  3795},  
    {61,  3790},  
    {62,  3786},  
    {63,  3782},  
    {65,  3778},  
    {66,  3775},  
    {68,  3769},  
    {69,  3763},  
    {70,  3758},  
    {72,  3754},  
    {73,  3751},  
    {75,  3746},  
    {76,  3741},  
    {77,  3735},  
    {79,  3728},  
    {80,  3722},  
    {82,  3716},  
    {83,  3706},  
    {85,  3702},  
    {86,  3700},  
    {87,  3696},  
    {89,  3695},  
    {90,  3691},  
    {92,  3684},  
    {93,  3659},  
    {94,  3614},  
    {96,  3557},  
    {97,  3485},  
    {99,  3372},  
    {100, 3145}  
        ,{100, 3145},  
        {100, 3145},  
        {100, 3145},  
        {100, 3145},  
        {100, 3145},  
        {100, 3145},  
        {100, 3145},  
        {100, 3145},  
        {100, 3145},  
        {100, 3145},  
        {100, 3145},  
        {100, 3145},  
        {100, 3145},  
        {100, 3145},  
        {100, 3145},  
        {100, 3145},  
        {100, 3145},  
        {100, 3145},  
        {100, 3145},  
        {100, 3145},  
        {100, 3145},  
        {100, 3145},  
        {100, 3145},  
        {100, 3145},  
        {100, 3145},  
        {100, 3145},  
        {100, 3145},  
        {100, 3145},  
        {100, 3145},  
        {100, 3145},  
        {100, 3145},  
        {100, 3145},  
        {100, 3145},  
        {100, 3145},  
        {100, 3145},  
        {100, 3145},  
        {100, 3145},  
        {100, 3145}  

};             


// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2[] =
{        
    {0,   4337}, 
    {1,   4322}, 
    {2,   4310}, 
    {3,   4296}, 
    {4,   4286}, 
    {5,   4275}, 
    {6,   4264}, 
    {7,   4252}, 
    {8,   4240}, 
    {9,   4229}, 
    {10,  4219}, 
    {10,  4209}, 
    {11,  4197}, 
    {12,  4187}, 
    {13,  4176}, 
    {14,  4166}, 
    {15,  4156}, 
    {16,  4146}, 
    {17,  4135}, 
    {18,  4125}, 
    {19,  4114}, 
    {20,  4103}, 
    {21,  4094}, 
    {22,  4084}, 
    {23,  4076}, 
    {24,  4070}, 
    {25,  4066}, 
    {26,  4054}, 
    {27,  4041}, 
    {28,  4024}, 
    {29,  4010}, 
    {30,  3998}, 
    {30,  3989}, 
    {31,  3981}, 
    {32,  3975}, 
    {33,  3971}, 
    {34,  3964}, 
    {35,  3955}, 
    {36,  3947}, 
    {37,  3937}, 
    {38,  3926}, 
    {39,  3917}, 
    {40,  3906}, 
    {41,  3898}, 
    {42,  3890}, 
    {43,  3883}, 
    {44,  3877}, 
    {45,  3870}, 
    {46,  3865}, 
    {47,  3859}, 
    {48,  3853}, 
    {49,  3849}, 
    {50,  3844}, 
    {50,  3839}, 
    {51,  3835}, 
    {52,  3830}, 
    {53,  3827}, 
    {54,  3822}, 
    {55,  3819}, 
    {56,  3815}, 
    {57,  3811}, 
    {58,  3808}, 
    {59,  3805}, 
    {60,  3801}, 
    {61,  3799}, 
    {62,  3795}, 
    {63,  3793}, 
    {64,  3789}, 
    {65,  3788}, 
    {66,  3784}, 
    {67,  3782}, 
    {68,  3779}, 
    {69,  3774}, 
    {70,  3769}, 
    {70,  3766}, 
    {71,  3762}, 
    {72,  3758}, 
    {73,  3754}, 
    {74,  3750}, 
    {75,  3748}, 
    {76,  3744}, 
    {77,  3742}, 
    {78,  3737}, 
    {79,  3735}, 
    {80,  3732}, 
    {81,  3727}, 
    {82,  3723}, 
    {83,  3717}, 
    {84,  3712}, 
    {85,  3708}, 
    {86,  3701}, 
    {87,  3695}, 
    {88,  3691}, 
    {89,  3691}, 
    {90,  3689}, 
    {90,  3688}, 
    {91,  3686}, 
    {92,  3682}, 
    {93,  3671}, 
    {94,  3645}, 
    {95,  3607}, 
    {96,  3560}, 
    {97,  3501}, 
    {98,  3421}, 
    {99,  3298}, 
    {100, 3030} 
        ,{100, 3030}, 
        {100, 3030}, 
        {100, 3030}, 
        {100, 3030} 

};             


// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3[] =
{
    {0,   4346}, 
    {1,   4333}, 
    {2,   4321}, 
    {3,   4311}, 
    {4,   4299}, 
    {5,   4288}, 
    {6,   4276}, 
    {7,   4265}, 
    {8,   4252}, 
    {9,   4242}, 
    {10,  4232}, 
    {10,  4222}, 
    {11,  4210}, 
    {12,  4200}, 
    {13,  4190}, 
    {14,  4178}, 
    {15,  4167}, 
    {16,  4156}, 
    {17,  4147}, 
    {18,  4136}, 
    {19,  4126}, 
    {20,  4116}, 
    {21,  4104}, 
    {22,  4094}, 
    {23,  4086}, 
    {24,  4076}, 
    {25,  4066}, 
    {26,  4057}, 
    {27,  4047}, 
    {28,  4038}, 
    {29,  4028}, 
    {30,  4019}, 
    {30,  4010}, 
    {31,  4002}, 
    {32,  3994}, 
    {33,  3985}, 
    {34,  3978}, 
    {35,  3969}, 
    {36,  3960}, 
    {37,  3952}, 
    {38,  3942}, 
    {39,  3931}, 
    {40,  3921}, 
    {41,  3910}, 
    {42,  3903}, 
    {43,  3895}, 
    {44,  3887}, 
    {45,  3881}, 
    {46,  3875}, 
    {47,  3868}, 
    {48,  3864}, 
    {49,  3858}, 
    {50,  3853}, 
    {50,  3847}, 
    {51,  3842}, 
    {52,  3839}, 
    {53,  3834}, 
    {54,  3830}, 
    {55,  3825}, 
    {56,  3821}, 
    {57,  3819}, 
    {58,  3815}, 
    {59,  3810}, 
    {60,  3808}, 
    {61,  3805}, 
    {62,  3800}, 
    {63,  3798}, 
    {64,  3794}, 
    {65,  3792}, 
    {66,  3789}, 
    {67,  3786}, 
    {68,  3783}, 
    {69,  3777}, 
    {70,  3770}, 
    {70,  3762}, 
    {71,  3758}, 
    {72,  3755}, 
    {73,  3750}, 
    {74,  3745}, 
    {75,  3740}, 
    {76,  3737}, 
    {77,  3734}, 
    {78,  3731}, 
    {79,  3730}, 
    {80,  3726}, 
    {81,  3722}, 
    {82,  3717}, 
    {83,  3712}, 
    {84,  3708}, 
    {85,  3704}, 
    {86,  3699}, 
    {87,  3692}, 
    {88,  3686}, 
    {89,  3685}, 
    {90,  3684}, 
    {90,  3682}, 
    {91,  3681}, 
    {92,  3679}, 
    {93,  3671}, 
    {94,  3651}, 
    {95,  3618}, 
    {96,  3574}, 
    {97,  3523}, 
    {98,  3455}, 
    {99,  3358}, 
    {100, 3191} 
        ,{100, 3191}, 
        {100, 3191}, 
        {100, 3191}, 
        {100, 3191} 

};             
           

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUC battery_profile_temperature[] =
{
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },          
  {0  , 0 },
  {0  , 0 },
  {0  , 0 },
  {0  , 0 },
  {0  , 0 },
  {0  , 0 },
  {0  , 0 },
  {0  , 0 },
  {0  , 0 },
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }, 
	{0  , 0 },	    
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 },   
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }  
        ,{0  , 0 },  
        {0  , 0 },  
        {0  , 0 },  
        {0  , 0 },  
        {0  , 0 },  
        {0  , 0 },  
        {0  , 0 },  
        {0  , 0 },  
        {0  , 0 },  
        {0  , 0 },  
        {0  , 0 },  
        {0  , 0 },  
        {0  , 0 },  
        {0  , 0 },  
        {0  , 0 },  
        {0  , 0 },  
        {0  , 0 },  
        {0  , 0 },  
        {0  , 0 }  
};      

/////////////////////////////////////////////////////////////////////
// <Rbat, Battery_Voltage> Table
/////////////////////////////////////////////////////////////////////
typedef struct _R_PROFILE_STRUC
{
    kal_int32 resistance; // Ohm
    kal_int32 voltage;
} R_PROFILE_STRUC, *R_PROFILE_STRUC_P;

// T0 -10C
R_PROFILE_STRUC r_profile_t0[] =
{
    {690,   4322}, 
    {690,   4309}, 
    {720,   4298}, 
    {732,   4287}, 
    {743,   4276}, 
    {746,   4264}, 
    {751,   4253}, 
    {756,   4242}, 
    {762,   4231}, 
    {739,   4210}, 
    {753,   4203}, 
    {759,   4192}, 
    {752,   4178}, 
    {744,   4167}, 
    {755,   4157}, 
    {736,   4140}, 
    {749,   4130}, 
    {705,   4110}, 
    {695,   4090}, 
    {695,   4070}, 
    {697,   4050}, 
    {682,   4035}, 
    {675,   4025}, 
    {654,   4002}, 
    {627,   3980}, 
    {621,   3966}, 
    {631,   3953}, 
    {622,   3939}, 
    {608,   3928}, 
    {634,   3926}, 
    {657,   3921}, 
    {675,   3919}, 
    {675,   3900}, 
    {688,   3893}, 
    {734,   3888}, 
    {763,   3880}, 
    {799,   3875}, 
    {865,   3872}, 
    {913,   3865}, 
    {960,   3860}, 
    {992,   3855}, 
    {1032,  3848}, 
    {1082,  3842}, 
    {1093,  3837}, 
    {1131,  3832}, 
    {1194,  3828}, 
    {1228,  3821}, 
    {1261,  3815}, 
    {1297,  3809}, 
    {1327,  3801}, 
    {1359,  3794}, 
    {1370,  3788}, 
    {1377,  3782}, 
    {1383,  3776}, 
    {1384,  3769}, 
    {1387,  3763}, 
    {1392,  3756}, 
    {1398,  3749}, 
    {1406,  3743}, 
    {1412,  3736}, 
    {1422,  3731}, 
    {1435,  3726}, 
    {1440,  3721}, 
    {1456,  3715}, 
    {1468,  3708}, 
    {1483,  3697}, 
    {1499,  3684}, 
    {1515,  3666}, 
    {1530,  3642}, 
    {1555,  3607}, 
    {1586,  3561}, 
    {1631,  3497}, 
    {1713,  3399}, 
    {2393,  3210} 
        ,{2393,  3210}, 
        {2393,  3210}, 
        {2393,  3210}, 
        {2393,  3210}, 
        {2393,  3210}, 
        {2393,  3210}, 
        {2393,  3210}, 
        {2393,  3210}, 
        {2393,  3210}, 
        {2393,  3210}, 
        {2393,  3210}, 
        {2393,  3210}, 
        {2393,  3210}, 
        {2393,  3210}, 
        {2393,  3210}, 
        {2393,  3210}, 
        {2393,  3210}, 
        {2393,  3210}, 
        {2393,  3210}, 
        {2393,  3210}, 
        {2393,  3210}, 
        {2393,  3210}, 
        {2393,  3210}, 
        {2393,  3210}, 
        {2393,  3210}, 
        {2393,  3210}, 
        {2393,  3210}, 
        {2393,  3210}, 
        {2393,  3210}, 
        {2393,  3210}, 
        {2393,  3210}, 
        {2393,  3210}, 
        {2393,  3210}, 
        {2393,  3210}, 
        {2393,  3210}, 
        {2393,  3210} 

};             
              

// T1 0C
R_PROFILE_STRUC r_profile_t1[] =
{
    {859,   4319}, 
    {859,   4300}, 
    {898,   4286}, 
    {823,   4271}, 
    {863,   4257}, 
    {876,   4241}, 
    {853,   4221}, 
    {890,   4197}, 
    {974,   4169}, 
    {1122,  4138}, 
    {1215,  4116}, 
    {1257,  4098}, 
    {1245,  4088}, 
    {1314,  4075}, 
    {1284,  4063}, 
    {1265,  4043}, 
    {1236,  4019}, 
    {1250,  3994}, 
    {1259,  3974}, 
    {1260,  3958}, 
    {1224,  3942}, 
    {1248,  3931}, 
    {1258,  3921}, 
    {1258,  3913}, 
    {1277,  3907}, 
    {1283,  3900}, 
    {1256,  3892}, 
    {1274,  3886}, 
    {1270,  3880}, 
    {1209,  3872}, 
    {1246,  3866}, 
    {1337,  3859}, 
    {1093,  3852}, 
    {1343,  3846}, 
    {1259,  3840}, 
    {1429,  3832}, 
    {1275,  3827}, 
    {1352,  3821}, 
    {1346,  3815}, 
    {1291,  3809}, 
    {1233,  3805}, 
    {1081,  3801}, 
    {1044,  3795}, 
    {986,   3790}, 
    {879,   3786}, 
    {743,   3782}, 
    {660,   3778}, 
    {623,   3775}, 
    {591,   3769}, 
    {596,   3763}, 
    {585,   3758}, 
    {579,   3754}, 
    {592,   3751}, 
    {581,   3746}, 
    {588,   3741}, 
    {574,   3735}, 
    {547,   3728}, 
    {537,   3722}, 
    {513,   3716}, 
    {482,   3706}, 
    {454,   3702}, 
    {537,   3700}, 
    {555,   3696}, 
    {567,   3695}, 
    {583,   3691}, 
    {584,   3684}, 
    {587,   3659}, 
    {581,   3614}, 
    {584,   3557}, 
    {618,   3485}, 
    {700,   3372}, 
    {1589,  3145} 
        ,{1589,  3145}, 
        {1589,  3145}, 
        {1589,  3145}, 
        {1589,  3145}, 
        {1589,  3145}, 
        {1589,  3145}, 
        {1589,  3145}, 
        {1589,  3145}, 
        {1589,  3145}, 
        {1589,  3145}, 
        {1589,  3145}, 
        {1589,  3145}, 
        {1589,  3145}, 
        {1589,  3145}, 
        {1589,  3145}, 
        {1589,  3145}, 
        {1589,  3145}, 
        {1589,  3145}, 
        {1589,  3145}, 
        {1589,  3145}, 
        {1589,  3145}, 
        {1589,  3145}, 
        {1589,  3145}, 
        {1589,  3145}, 
        {1589,  3145}, 
        {1589,  3145}, 
        {1589,  3145}, 
        {1589,  3145}, 
        {1589,  3145}, 
        {1589,  3145}, 
        {1589,  3145}, 
        {1589,  3145}, 
        {1589,  3145}, 
        {1589,  3145}, 
        {1589,  3145}, 
        {1589,  3145}, 
        {1589,  3145}, 
        {1589,  3145} 

}; 

// T2 25C
R_PROFILE_STRUC r_profile_t2[] =
{
    {118,   4337}, 
    {118,   4322}, 
    {119,   4310}, 
    {115,   4296}, 
    {119,   4286}, 
    {120,   4275}, 
    {125,   4264}, 
    {121,   4252}, 
    {118,   4240}, 
    {120,   4229}, 
    {123,   4219}, 
    {125,   4209}, 
    {124,   4197}, 
    {128,   4187}, 
    {127,   4176}, 
    {129,   4166}, 
    {136,   4156}, 
    {138,   4146}, 
    {138,   4135}, 
    {144,   4125}, 
    {143,   4114}, 
    {139,   4103}, 
    {144,   4094}, 
    {145,   4084}, 
    {150,   4076}, 
    {157,   4070}, 
    {165,   4066}, 
    {159,   4054}, 
    {153,   4041}, 
    {147,   4024}, 
    {148,   4010}, 
    {147,   3998}, 
    {149,   3989}, 
    {146,   3981}, 
    {150,   3975}, 
    {155,   3971}, 
    {150,   3964}, 
    {143,   3955}, 
    {140,   3947}, 
    {135,   3937}, 
    {130,   3926}, 
    {126,   3917}, 
    {119,   3906}, 
    {118,   3898}, 
    {117,   3890}, 
    {118,   3883}, 
    {116,   3877}, 
    {113,   3870}, 
    {115,   3865}, 
    {112,   3859}, 
    {114,   3853}, 
    {115,   3849}, 
    {112,   3844}, 
    {118,   3839}, 
    {117,   3835}, 
    {116,   3830}, 
    {120,   3827}, 
    {122,   3822}, 
    {126,   3819}, 
    {124,   3815}, 
    {127,   3811}, 
    {125,   3808}, 
    {127,   3805}, 
    {130,   3801}, 
    {133,   3799}, 
    {131,   3795}, 
    {138,   3793}, 
    {134,   3789}, 
    {138,   3788}, 
    {134,   3784}, 
    {140,   3782}, 
    {139,   3779}, 
    {140,   3774}, 
    {136,   3769}, 
    {137,   3766}, 
    {139,   3762}, 
    {134,   3758}, 
    {133,   3754}, 
    {133,   3750}, 
    {133,   3748}, 
    {131,   3744}, 
    {129,   3742}, 
    {126,   3737}, 
    {128,   3735}, 
    {129,   3732}, 
    {129,   3727}, 
    {132,   3723}, 
    {129,   3717}, 
    {127,   3712}, 
    {132,   3708}, 
    {128,   3701}, 
    {129,   3695}, 
    {129,   3691}, 
    {133,   3691}, 
    {136,   3689}, 
    {139,   3688}, 
    {143,   3686}, 
    {146,   3682}, 
    {147,   3671}, 
    {144,   3645}, 
    {151,   3607}, 
    {159,   3560}, 
    {167,   3501}, 
    {182,   3421}, 
    {218,   3298}, 
    {1565,  3030} 
        ,{1565,  3030}, 
        {1565,  3030}, 
        {1565,  3030}, 
        {1565,  3030} 

};

// T3 50C
R_PROFILE_STRUC r_profile_t3[] =
{              
    {64,   4346}, 
    {64,   4333}, 
    {69,   4321}, 
    {70,   4311}, 
    {70,   4299}, 
    {71,   4288}, 
    {73,   4276}, 
    {74,   4265}, 
    {65,   4252}, 
    {70,   4242}, 
    {72,   4232}, 
    {76,   4222}, 
    {74,   4210}, 
    {74,   4200}, 
    {76,   4190}, 
    {74,   4178}, 
    {72,   4167}, 
    {74,   4156}, 
    {78,   4147}, 
    {76,   4136}, 
    {78,   4126}, 
    {75,   4116}, 
    {72,   4104}, 
    {67,   4094}, 
    {79,   4086}, 
    {79,   4076}, 
    {78,   4066}, 
    {78,   4057}, 
    {78,   4047}, 
    {78,   4038}, 
    {80,   4028}, 
    {84,   4019}, 
    {82,   4010}, 
    {83,   4002}, 
    {83,   3994}, 
    {81,   3985}, 
    {89,   3978}, 
    {87,   3969}, 
    {85,   3960}, 
    {88,   3952}, 
    {85,   3942}, 
    {77,   3931}, 
    {76,   3921}, 
    {74,   3910}, 
    {74,   3903}, 
    {72,   3895}, 
    {70,   3887}, 
    {72,   3881}, 
    {72,   3875}, 
    {72,   3868}, 
    {73,   3864}, 
    {71,   3858}, 
    {68,   3853}, 
    {69,   3847}, 
    {66,   3842}, 
    {70,   3839}, 
    {72,   3834}, 
    {73,   3830}, 
    {70,   3825}, 
    {73,   3821}, 
    {73,   3819}, 
    {75,   3815}, 
    {70,   3810}, 
    {74,   3808}, 
    {75,   3805}, 
    {71,   3800}, 
    {76,   3798}, 
    {77,   3794}, 
    {78,   3792}, 
    {79,   3789}, 
    {78,   3786}, 
    {79,   3783}, 
    {76,   3777}, 
    {71,   3770}, 
    {68,   3762}, 
    {72,   3758}, 
    {71,   3755}, 
    {68,   3750}, 
    {69,   3745}, 
    {67,   3740}, 
    {68,   3737}, 
    {68,   3734}, 
    {68,   3731}, 
    {73,   3730}, 
    {70,   3726}, 
    {72,   3722}, 
    {71,   3717}, 
    {74,   3712}, 
    {72,   3708}, 
    {71,   3704}, 
    {74,   3699}, 
    {69,   3692}, 
    {69,   3686}, 
    {70,   3685}, 
    {73,   3684}, 
    {72,   3682}, 
    {75,   3681}, 
    {80,   3679}, 
    {79,   3671}, 
    {78,   3651}, 
    {77,   3618}, 
    {75,   3574}, 
    {84,   3523}, 
    {92,   3455}, 
    {104,  3358}, 
    {171,  3191} 
        ,{171,  3191}, 
        {171,  3191}, 
        {171,  3191}, 
        {171,  3191} 

};

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUC r_profile_temperature[] =
{
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },          
  {0  , 0 },
  {0  , 0 },
  {0  , 0 },
  {0  , 0 },
  {0  , 0 },
  {0  , 0 },
  {0  , 0 },
  {0  , 0 },
  {0  , 0 },
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }, 
	{0  , 0 },	    
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 },   
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }  
        ,{0  , 0 },  
        {0  , 0 },  
        {0  , 0 },  
        {0  , 0 },  
        {0  , 0 },  
        {0  , 0 },  
        {0  , 0 },  
        {0  , 0 },  
        {0  , 0 },  
        {0  , 0 },  
        {0  , 0 },  
        {0  , 0 },  
        {0  , 0 },  
        {0  , 0 },  
        {0  , 0 },  
        {0  , 0 },  
        {0  , 0 },  
        {0  , 0 },  
        {0  , 0 }  
};   


int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUC_P fgauge_get_profile(kal_uint32 temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUC_P fgauge_get_profile_r_table(kal_uint32 temperature);

//#define CONFIG_POWER_VERIFY
