#include "information_station.h"

void get_info_station(Station *s)
{
    //读取站点信息
    int i = 0, j = 0;

    for (i = 0; i < 197; i++)
    {
        for (j = 0; j < 6; j++)
        {
            s[i].aWay[j] = 404;
        }
    }

    //轨道交通1号线
    s[0].flag = 0;
    s[0].aWay[0] = 0;

    s[1].flag = 0;
    s[1].aWay[0] = 0;
    s[1].aWay[1] = 1;

    s[2].flag = 2;
    s[2].aWay[0] = 1;
    s[2].aWay[1] = 2;
    s[2].aWay[2] = 127;
    s[2].aWay[3] = 128;

    s[3].flag = 0;
    s[3].aWay[0] = 2;
    s[3].aWay[1] = 3;

    s[4].flag = 0;
    s[4].aWay[0] = 3;
    s[4].aWay[2] = 4;

    s[5].flag = 0;
    s[5].aWay[0] = 4;
    s[5].aWay[1] = 5;

    s[6].flag = 0;
    s[6].aWay[0] = 5;
    s[6].aWay[1] = 6;

    s[7].flag = 0;
    s[7].aWay[0] = 6;
    s[7].aWay[1] = 7;

    s[8].flag = 0;
    s[8].aWay[0] = 7;
    s[8].aWay[1] = 8;

    s[9].flag = 0;
    s[9].aWay[0] = 8;
    s[9].aWay[1] = 9;

    s[10].flag = 0;
    s[10].aWay[0] = 9;
    s[10].aWay[1] = 10;

    s[11].flag = 0;
    s[11].aWay[0] = 10;
    s[11].aWay[1] = 11;

    s[12].flag = 0;
    s[12].aWay[0] = 11;
    s[12].aWay[1] = 12;

    s[13].flag = 2;
    s[13].aWay[0] = 12;
    s[13].aWay[1] = 13;
    s[13].aWay[2] = 81;
    s[13].aWay[3] = 82;

    s[14].flag = 0;
    s[14].aWay[0] = 13;
    s[14].aWay[1] = 14;

    s[15].flag = 0;
    s[15].aWay[0] = 14;
    s[15].aWay[1] = 15;

    s[16].flag = 0;
    s[16].aWay[0] = 15;
    s[16].aWay[1] = 16;

    s[17].flag = 0;
    s[17].aWay[0] = 16;
    s[17].aWay[1] = 17;

    s[18].flag = 0;
    s[18].aWay[0] = 17;
    s[18].aWay[1] = 18;

    s[19].flag = 2;
    s[19].aWay[0] = 18;
    s[19].aWay[1] = 19;
    s[19].aWay[2] = 45;
    s[19].aWay[3] = 46;

    s[20].flag = 2;
    s[20].aWay[0] = 19;
    s[20].aWay[1] = 20;
    s[20].aWay[2] = 142;
    s[20].aWay[3] = 143;

    s[21].flag = 2;
    s[21].aWay[0] = 20;
    s[21].aWay[1] = 21;
    s[21].aWay[2] = 175;
    s[21].aWay[3] = 176;

    s[22].flag = 2;
    s[22].aWay[0] = 21;
    s[22].aWay[1] = 22;
    s[22].aWay[2] = 199;
    s[22].aWay[3] = 200;

    s[23].flag = 0;
    s[23].aWay[0] = 22;
    s[23].aWay[1] = 23;

    s[24].flag = 0;
    s[24].aWay[0] = 23;
    s[24].aWay[1] = 24;

    s[25].flag = 0;
    s[25].aWay[0] = 24;
    s[25].aWay[1] = 25;

    s[26].flag = 0;
    s[26].aWay[0] = 25;
    s[26].aWay[1] = 26;

    s[27].flag = 0;
    s[27].aWay[0] = 26;
    s[27].aWay[1] = 27;

    s[28].flag = 0;
    s[28].aWay[0] = 27;
    s[28].aWay[1] = 28;

    s[29].flag = 0;
    s[29].aWay[0] = 28;
    s[29].aWay[1] = 29;

    s[30].flag = 0;
    s[30].aWay[0] = 29;
    s[30].aWay[1] = 30;

    s[31].flag = 0;
    s[31].aWay[0] = 30;

    //轨道交通2号线
    s[32].flag = 0;
    s[32].aWay[0] = 31;

    s[33].flag = 0;
    s[33].aWay[0] = 31;
    s[33].aWay[1] = 32;

    s[34].flag = 0;
    s[34].aWay[0] = 32;
    s[34].aWay[1] = 33;

    s[35].flag = 2;
    s[35].aWay[0] = 33;
    s[35].aWay[1] = 34;
    s[35].aWay[2] = 165;
    s[35].aWay[3] = 166;

    s[36].flag = 0;
    s[36].aWay[0] = 34;
    s[36].aWay[1] = 35;

    s[37].flag = 3;
    s[37].aWay[0] = 35;
    s[37].aWay[1] = 36;
    s[37].aWay[2] = 68;
    s[37].aWay[3] = 194;
    s[37].aWay[4] = 195;

    s[38].flag = 0;
    s[38].aWay[0] = 36;
    s[38].aWay[1] = 37;

    s[39].flag = 0;
    s[39].aWay[0] = 37;
    s[39].aWay[1] = 38;

    s[40].flag = 2;
    s[40].aWay[0] = 38;
    s[40].aWay[1] = 39;
    s[40].aWay[2] = 135;
    s[40].aWay[3] = 136;

    s[41].flag = 0;
    s[41].aWay[0] = 39;
    s[41].aWay[1] = 40;

    s[42].flag = 0;
    s[42].aWay[0] = 40;
    s[42].aWay[1] = 41;

    s[43].flag = 2;
    s[43].aWay[0] = 41;
    s[43].aWay[1] = 42;
    s[43].aWay[2] = 77;
    s[43].aWay[3] = 78;

    s[44].flag = 2;
    s[44].aWay[0] = 42;
    s[44].aWay[1] = 43;
    s[44].aWay[2] = 172;
    s[44].aWay[3] = 173;

    s[45].flag = 0;
    s[45].aWay[0] = 43;
    s[45].aWay[1] = 44;

    s[46].flag = 0;
    s[46].aWay[0] = 44;
    s[46].aWay[1] = 45;

    s[47].flag = 2;
    s[47].aWay[0] = 46;
    s[47].aWay[1] = 47;
    s[47].aWay[2] = 143;
    s[47].aWay[3] = 144;

    s[48].flag = 0;
    s[48].aWay[0] = 47;
    s[48].aWay[1] = 48;

    s[49].flag = 2;
    s[49].aWay[0] = 48;
    s[49].aWay[1] = 49;
    s[49].aWay[2] = 179;
    s[49].aWay[3] = 180;

    s[50].flag = 0;
    s[50].aWay[0] = 49;
    s[50].aWay[1] = 50;

    s[51].flag = 2;
    s[51].aWay[0] = 50;
    s[51].aWay[1] = 51;
    s[51].aWay[2] = 101;
    s[51].aWay[3] = 102;

    s[52].flag = 2;
    s[52].aWay[0] = 51;
    s[52].aWay[1] = 52;
    s[52].aWay[2] = 102;
    s[52].aWay[3] = 103;

    s[53].flag = 0;
    s[53].aWay[0] = 52;
    s[53].aWay[1] = 53;

    s[54].flag = 2;
    s[54].aWay[0] = 53;
    s[54].aWay[1] = 54;
    s[54].aWay[2] = 210;
    s[54].aWay[3] = 211;

    s[55].flag = 0;
    s[55].aWay[0] = 54;
    s[55].aWay[1] = 55;

    s[56].flag = 0;
    s[56].aWay[0] = 55;
    s[56].aWay[1] = 56;

    s[57].flag = 0;
    s[57].aWay[0] = 56;
    s[57].aWay[1] = 57;

    s[58].flag = 0;
    s[58].aWay[0] = 57;
    s[58].aWay[1] = 58;

    s[59].flag = 0;
    s[59].aWay[0] = 58;
    s[59].aWay[1] = 59;

    s[60].flag = 0;
    s[60].aWay[0] = 59;
    s[60].aWay[1] = 60;

    s[61].flag = 0;
    s[61].aWay[0] = 60;
    s[61].aWay[1] = 61;

    s[62].flag = 0;
    s[62].aWay[0] = 61;
    s[62].aWay[1] = 62;

    s[63].flag = 0;
    s[63].aWay[0] = 62;
    s[63].aWay[1] = 63;

    s[64].flag = 0;
    s[64].aWay[0] = 63;
    s[64].aWay[1] = 64;

    s[65].flag = 0;
    s[65].aWay[0] = 64;
    s[65].aWay[1] = 65;

    s[66].flag = 0;
    s[66].aWay[0] = 65;
    s[66].aWay[1] = 66;

    s[67].flag = 0;
    s[67].aWay[0] = 66;
    s[67].aWay[1] = 67;

    s[68].flag = 0;
    s[68].aWay[0] = 67;

    //轨道交通3号线
    s[69].flag = 0;
    s[69].aWay[0] = 68;
    s[69].aWay[1] = 69;

    s[70].flag = 0;
    s[70].aWay[0] = 69;
    s[70].aWay[1] = 70;

    s[71].flag = 0;
    s[71].aWay[0] = 70;
    s[71].aWay[1] = 71;

    s[72].flag = 0;
    s[72].aWay[0] = 71;
    s[72].aWay[1] = 72;

    s[73].flag = 0;
    s[73].aWay[0] = 72;
    s[73].aWay[1] = 73;

    s[74].flag = 2;
    s[74].aWay[0] = 73;
    s[74].aWay[1] = 74;
    s[74].aWay[2] = 198;
    s[74].aWay[3] = 199;

    s[75].flag = 0;
    s[75].aWay[0] = 74;
    s[75].aWay[1] = 75;

    s[76].flag = 3;
    s[76].aWay[0] = 75;
    s[76].aWay[1] = 76;
    s[76].aWay[2] = 140;
    s[76].aWay[3] = 141;
    s[76].aWay[4] = 174;
    s[76].aWay[5] = 175;

    s[77].flag = 0;
    s[77].aWay[0] = 76;
    s[77].aWay[1] = 77;

    s[78].flag = 0;
    s[78].aWay[0] = 78;
    s[78].aWay[1] = 79;

    s[79].flag = 2;
    s[79].aWay[0] = 79;
    s[79].aWay[1] = 80;
    s[79].aWay[2] = 171;
    s[79].aWay[3] = 172;

    s[80].flag = 0;
    s[80].aWay[0] = 80;
    s[80].aWay[1] = 81;

    s[81].flag = 2;
    s[81].aWay[0] = 82;
    s[81].aWay[1] = 83;
    s[81].aWay[2] = 113;
    s[81].aWay[3] = 114;

    s[82].flag = 0;
    s[82].aWay[0] = 83;
    s[82].aWay[1] = 84;

    s[83].flag = 0;
    s[83].aWay[0] = 84;
    s[83].aWay[1] = 85;

    s[84].flag = 0;
    s[84].aWay[0] = 85;
    s[84].aWay[1] = 86;

    s[85].flag = 0;
    s[85].aWay[0] = 86;
    s[85].aWay[1] = 87;

    s[86].flag = 0;
    s[86].aWay[0] = 87;
    s[86].aWay[1] = 88;

    s[87].flag = 0;
    s[87].aWay[0] = 88;
    s[87].aWay[1] = 89;

    s[88].flag = 2;
    s[88].aWay[0] = 89;
    s[88].aWay[1] = 90;
    s[88].aWay[2] = 157;

    s[89].flag = 0;
    s[89].aWay[0] = 90;

    //轨道交通4号线
    s[90].flag = 0;
    s[90].aWay[0] = 91;

    s[91].flag = 0;
    s[91].aWay[0] = 91;
    s[91].aWay[1] = 92;

    s[92].flag = 0;
    s[92].aWay[0] = 92;
    s[92].aWay[1] = 93;

    s[93].flag = 0;
    s[93].aWay[0] = 93;
    s[93].aWay[1] = 94;

    s[94].flag = 0;
    s[94].aWay[0] = 94;
    s[94].aWay[1] = 95;

    s[95].flag = 0;
    s[95].aWay[0] = 95;
    s[95].aWay[1] = 96;

    s[96].flag = 0;
    s[96].aWay[0] = 96;
    s[96].aWay[1] = 97;

    s[97].flag = 2;
    s[97].aWay[0] = 97;
    s[97].aWay[1] = 98;
    s[97].aWay[2] = 203;
    s[97].aWay[3] = 204;

    s[98].flag = 0;
    s[98].aWay[0] = 98;
    s[98].aWay[1] = 99;

    s[99].flag = 0;
    s[99].aWay[0] = 99;
    s[99].aWay[1] = 100;

    s[100].flag = 0;
    s[100].aWay[0] = 100;
    s[100].aWay[1] = 101;

    s[101].flag = 0;
    s[101].aWay[0] = 103;
    s[101].aWay[1] = 104;

    s[102].flag = 2;
    s[102].aWay[0] = 104;
    s[102].aWay[1] = 105;
    s[102].aWay[2] = 181;
    s[102].aWay[3] = 182;

    s[103].flag = 0;
    s[103].aWay[0] = 105;
    s[103].aWay[1] = 106;

    s[104].flag = 0;
    s[104].aWay[0] = 106;
    s[104].aWay[1] = 107;

    s[105].flag = 0;
    s[105].aWay[0] = 107;
    s[105].aWay[1] = 108;

    s[106].flag = 2;
    s[106].aWay[0] = 108;
    s[106].aWay[1] = 109;
    s[106].aWay[2] = 148;
    s[106].aWay[3] = 149;

    s[107].flag = 0;
    s[107].aWay[0] = 109;
    s[107].aWay[1] = 110;

    s[108].flag = 0;
    s[108].aWay[0] = 110;
    s[108].aWay[1] = 111;

    s[109].flag = 0;
    s[109].aWay[0] = 111;
    s[109].aWay[1] = 112;

    s[110].flag = 0;
    s[110].aWay[0] = 112;
    s[110].aWay[1] = 113;

    s[111].flag = 0;
    s[111].aWay[0] = 114;
    s[111].aWay[1] = 115;

    s[112].flag = 0;
    s[112].aWay[0] = 115;
    s[112].aWay[1] = 116;

    s[113].flag = 0;
    s[113].aWay[0] = 116;
    s[113].aWay[1] = 117;

    s[114].flag = 0;
    s[114].aWay[0] = 117;
    s[114].aWay[1] = 118;

    s[115].flag = 0;
    s[115].aWay[0] = 118;
    s[115].aWay[1] = 119;

    s[116].flag = 0;
    s[116].aWay[0] = 119;
    s[116].aWay[1] = 120;

    s[117].flag = 0;
    s[117].aWay[0] = 120;
    s[117].aWay[1] = 121;

    s[118].flag = 0;
    s[118].aWay[0] = 121;
    s[118].aWay[1] = 122;

    s[119].flag = 0;
    s[119].aWay[0] = 122;
    s[119].aWay[1] = 123;

    s[120].flag = 0;
    s[120].aWay[0] = 123;
    s[120].aWay[1] = 124;

    s[121].flag = 0;
    s[121].aWay[0] = 124;
    s[121].aWay[1] = 125;

    s[122].flag = 0;
    s[122].aWay[0] = 125;
    s[122].aWay[1] = 126;

    s[123].flag = 0;
    s[123].aWay[0] = 126;

    //轨道交通6号线
    s[124].flag = 0;
    s[124].aWay[0] = 127;

    s[125].flag = 0;
    s[125].aWay[0] = 128;
    s[125].aWay[1] = 129;

    s[126].flag = 0;
    s[126].aWay[0] = 129;
    s[126].aWay[1] = 130;

    s[127].flag = 0;
    s[127].aWay[0] = 130;
    s[127].aWay[1] = 131;

    s[128].flag = 0;
    s[128].aWay[0] = 131;
    s[128].aWay[1] = 132;

    s[129].flag = 0;
    s[129].aWay[0] = 132;
    s[129].aWay[1] = 133;

    s[130].flag = 2;
    s[130].aWay[0] = 133;
    s[130].aWay[1] = 134;
    s[130].aWay[2] = 168;
    s[130].aWay[3] = 169;

    s[131].flag = 0;
    s[131].aWay[0] = 134;
    s[131].aWay[1] = 135;

    s[132].flag = 0;
    s[132].aWay[0] = 136;
    s[132].aWay[1] = 137;

    s[133].flag = 0;
    s[133].aWay[0] = 137;
    s[133].aWay[1] = 138;

    s[134].flag = 0;
    s[134].aWay[0] = 138;
    s[134].aWay[1] = 139;

    s[135].flag = 0;
    s[135].aWay[0] = 139;
    s[135].aWay[1] = 140;

    s[136].flag = 0;
    s[136].aWay[0] = 141;
    s[136].aWay[1] = 142;

    s[137].flag = 0;
    s[137].aWay[0] = 144;
    s[137].aWay[1] = 145;

    s[138].flag = 0;
    s[138].aWay[0] = 145;
    s[138].aWay[1] = 146;

    s[139].flag = 0;
    s[139].aWay[0] = 146;
    s[139].aWay[1] = 147;

    s[140].flag = 0;
    s[140].aWay[0] = 147;
    s[140].aWay[1] = 148;

    s[141].flag = 0;
    s[141].aWay[0] = 149;
    s[141].aWay[1] = 150;

    s[142].flag = 0;
    s[142].aWay[0] = 150;
    s[142].aWay[1] = 151;

    s[143].flag = 0;
    s[143].aWay[0] = 151;
    s[143].aWay[1] = 152;

    s[144].flag = 0;
    s[144].aWay[0] = 152;
    s[144].aWay[1] = 153;

    s[145].flag = 0;
    s[145].aWay[0] = 153;
    s[145].aWay[1] = 154;

    s[146].flag = 0;
    s[146].aWay[0] = 154;
    s[146].aWay[1] = 155;

    s[147].flag = 0;
    s[147].aWay[0] = 155;
    s[147].aWay[1] = 156;

    s[148].flag = 0;
    s[148].aWay[0] = 156;
    s[148].aWay[1] = 157;

    //轨道交通7号线
    s[149].flag = 0;
    s[149].aWay[0] = 158;

    s[150].flag = 0;
    s[150].aWay[0] = 158;
    s[150].aWay[1] = 159;

    s[151].flag = 0;
    s[151].aWay[0] = 159;
    s[151].aWay[1] = 160;

    s[152].flag = 0;
    s[152].aWay[0] = 160;
    s[152].aWay[1] = 161;

    s[153].flag = 0;
    s[153].aWay[0] = 161;
    s[153].aWay[1] = 162;

    s[154].flag = 0;
    s[154].aWay[0] = 162;
    s[154].aWay[1] = 163;

    s[155].flag = 0;
    s[155].aWay[0] = 163;
    s[155].aWay[1] = 164;

    s[156].flag = 0;
    s[156].aWay[0] = 164;
    s[156].aWay[1] = 165;

    s[157].flag = 0;
    s[157].aWay[0] = 166;
    s[157].aWay[1] = 167;

    s[158].flag = 0;
    s[158].aWay[0] = 167;
    s[158].aWay[1] = 168;

    s[159].flag = 0;
    s[159].aWay[0] = 169;
    s[159].aWay[1] = 170;

    s[160].flag = 0;
    s[160].aWay[0] = 170;
    s[160].aWay[1] = 171;

    s[161].flag = 0;
    s[161].aWay[0] = 173;
    s[161].aWay[1] = 174;

    s[162].flag = 2;
    s[162].aWay[0] = 176;
    s[162].aWay[1] = 177;
    s[162].aWay[2] = 200;
    s[162].aWay[3] = 201;

    s[163].flag = 0;
    s[163].aWay[0] = 177;
    s[163].aWay[1] = 178;

    s[164].flag = 0;
    s[164].aWay[0] = 178;
    s[164].aWay[1] = 179;

    s[165].flag = 0;
    s[165].aWay[0] = 180;
    s[165].aWay[1] = 181;

    s[166].flag = 0;
    s[166].aWay[0] = 182;
    s[166].aWay[1] = 183;

    s[167].flag = 0;
    s[167].aWay[0] = 183;
    s[167].aWay[1] = 184;

    s[168].flag = 0;
    s[168].aWay[0] = 184;
    s[168].aWay[1] = 185;

    s[169].flag = 0;
    s[169].aWay[0] = 185;
    s[169].aWay[1] = 186;

    s[170].flag = 2;
    s[170].aWay[0] = 186;
    s[170].aWay[1] = 187;
    s[170].aWay[2] = 216;
    s[170].aWay[3] = 217;

    s[171].flag = 0;
    s[171].aWay[0] = 187;
    s[171].aWay[1] = 188;

    s[172].flag = 0;
    s[172].aWay[0] = 188;
    s[172].aWay[1] = 189;

    s[173].flag = 0;
    s[173].aWay[0] = 189;
    s[173].aWay[1] = 190;

    s[174].flag = 0;
    s[174].aWay[0] = 190;
    s[174].aWay[1] = 191;

    s[175].flag = 0;
    s[175].aWay[0] = 191;
    s[175].aWay[1] = 192;

    s[176].flag = 0;
    s[176].aWay[0] = 192;
    s[176].aWay[1] = 193;

    s[177].flag = 0;
    s[177].aWay[0] = 193;

    //轨道交通8号线
    s[178].flag = 0;
    s[178].aWay[0] = 194;

    s[179].flag = 0;
    s[179].aWay[0] = 195;
    s[179].aWay[1] = 196;

    s[180].flag = 0;
    s[180].aWay[0] = 196;
    s[180].aWay[1] = 197;

    s[181].flag = 0;
    s[181].aWay[0] = 197;
    s[181].aWay[1] = 198;

    s[182].flag = 0;
    s[182].aWay[0] = 201;
    s[182].aWay[1] = 202;

    s[183].flag = 0;
    s[183].aWay[0] = 202;
    s[183].aWay[1] = 203;

    s[184].flag = 0;
    s[184].aWay[0] = 204;
    s[184].aWay[1] = 205;

    s[185].flag = 0;
    s[185].aWay[0] = 205;
    s[185].aWay[1] = 206;

    s[186].flag = 0;
    s[186].aWay[0] = 206;
    s[186].aWay[1] = 207;

    s[187].flag = 0;
    s[187].aWay[0] = 207;
    s[187].aWay[1] = 208;

    s[188].flag = 0;
    s[188].aWay[0] = 208;
    s[188].aWay[1] = 209;

    s[189].flag = 0;
    s[189].aWay[0] = 209;
    s[189].aWay[1] = 210;

    s[190].flag = 0;
    s[190].aWay[0] = 211;
    s[190].aWay[1] = 212;

    s[191].flag = 0;
    s[191].aWay[0] = 212;
    s[191].aWay[1] = 213;

    s[192].flag = 0;
    s[192].aWay[0] = 213;
    s[192].aWay[1] = 214;

    s[193].flag = 0;
    s[193].aWay[0] = 214;
    s[193].aWay[1] = 215;

    s[194].flag = 0;
    s[194].aWay[0] = 215;
    s[194].aWay[1] = 216;

    s[195].flag = 0;
    s[195].aWay[0] = 217;
    s[195].aWay[1] = 218;

    s[196].flag = 0;
    s[196].aWay[0] = 218;

    for (i = 0; i < 197; i++)
    {
        if (s[i].flag != 0)
        {
            s[i].extime = 3.5;
        }
        else
        {
            s[i].extime = 0;
        }
        s[i].visited = 0;
    }
}