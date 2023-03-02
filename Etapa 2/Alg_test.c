#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Alg.h"
#include <time.h>

int main()
{   
    //Testul 0
    FILE *in0;
	FILE *out0;
	u_int32_t v0[500];
    int n0;
    clock_t start0, end0;
    double cpu_time0;

	in0 = fopen("in/test0.in", "rb");
	out0 = fopen("out/test0.out", "wb");

	fscanf(in0, "%d",&n0);

    for (int i = 0; i < n0; ++i) {
		fscanf(in0, "%d", &v0[i]);
	}
    
    int it0 = 10,count0 = 0;

    start0 = clock();
    for (int i = 0; i < n0; ++i) {   
        if(Prime(v0[i], it0) == 1){
             count0++;
            fprintf(out0,"%d ",v0[i]);
        } 
    }
    fprintf(out0,"\n%d",count0);

    end0 = clock();
    cpu_time0 = (double)(end0 - start0) * 1000 / CLOCKS_PER_SEC;
    printf("Time0: %f ms\n",cpu_time0);

    fclose(in0);
    fclose(out0);

    //Testul 1
	FILE *in1;
	FILE *out1;
	u_int32_t v1[500];
    int n1;
    clock_t start1, end1;
    double cpu_time1;

	in1 = fopen("in/test1.in", "rb");
	out1 = fopen("out/test1.out", "wb");

	fscanf(in1, "%d",&n1);

    for (int i = 0; i < n1; ++i) {
		fscanf(in1, "%d", &v1[i]);
	}
    
    int it1 = 1,count1 = 0;
    
    start1 = clock();
    for (int i = 0; i < n1; ++i) {   
        if (Prime(v1[i], it1) == 1){
            count1++;
            fprintf(out1,"%d ", v1[i]);
        } 
    }
    fprintf(out1,"\n%d",count1);
    end1 = clock();
    cpu_time1 = (double)(end1 - start1) * 1000 / CLOCKS_PER_SEC;
    printf("Time1: %f ms\n",cpu_time1);

    fclose(in1);
    fclose(out1);

    //Testul 2
    FILE *in2;
	FILE *out2;
	u_int32_t v2[500]; 
    int n2;
    clock_t start2, end2;
    double cpu_time2;

	in2 = fopen("in/test2.in", "rb");
	out2 = fopen("out/test2.out", "wb");

	fscanf(in2, "%d",&n2);

    for (int i = 0; i < n2; ++i) {
		fscanf(in2, "%d", &v2[i]);
	}
    
    int it2 = 10,count2 = 0;
    
    start2 = clock();
    for (int i = 0; i < n2; ++i) {   
        if(Prime(v2[i], it2) == 1){
             count2++;
            fprintf(out2,"%d ",v2[i]);
        } 
    }
    fprintf(out2,"\n%d",count2);

    end2 = clock();
    cpu_time2 = (double)(end2 - start2) * 1000 / CLOCKS_PER_SEC;
    printf("Time2: %f ms\n",cpu_time2);

    fclose(in2);
    fclose(out2);

    //Testul 3
    FILE *in3;
	FILE *out3;
	u_int32_t v3[500];
    int n3;
    clock_t start3, end3;
    double cpu_time3;

	in3 = fopen("in/test3.in", "rb");
	out3 = fopen("out/test3.out", "wb");

	fscanf(in3, "%d",&n3);

    for (int i = 0; i < n3; ++i) {
		fscanf(in3, "%d", &v3[i]);
	}
    
    int it3 = 5,count3 = 0;
    
    start3 = clock();
    for (int i = 0; i < n3; ++i) {   
        if(Prime(v3[i], it3) == 1){
             count3++;
            fprintf(out3,"%d ",v3[i]);
        } 
    }
    fprintf(out3,"\n%d",count3);

    end3 = clock();
    cpu_time3 = (double)(end3 - start3) * 1000 / CLOCKS_PER_SEC;
    printf("Time3: %f ms\n",cpu_time3);

    fclose(in3);
    fclose(out3);

    //Testul 4
    FILE *in4;
	FILE *out4;
	u_int32_t v4[500]; 
    int n4;
    clock_t start4, end4;
    double cpu_time4;

	in4 = fopen("in/test4.in", "rb");
	out4 = fopen("out/test4.out", "wb");

	fscanf(in4, "%d",&n4);

    for (int i = 0; i < n4; ++i) {
		fscanf(in4, "%d", &v4[i]);
	}
    
    int it4 = 1,count4 = 0;

    start4 = clock();
    for (int i = 0; i < n4; ++i) {   
        if(Prime(v4[i], it4) == 1){
             count4++;
            fprintf(out4,"%d ",v4[i]);
        } 
    }
    fprintf(out4,"\n%d",count4);

    end4 = clock();
    cpu_time4 = (double)(end4 - start4) * 1000 / CLOCKS_PER_SEC;
    printf("Time4: %f ms\n",cpu_time4);

    fclose(in4);
    fclose(out4);

    //Testul 5
    FILE *in5;
	FILE *out5;
	u_int32_t v5[500]; 
    int n5;
    clock_t start5, end5;
    double cpu_time5;

	in5 = fopen("in/test5.in", "rb");
	out5 = fopen("out/test5.out", "wb");

	fscanf(in5, "%d",&n5);

    for (int i = 0; i < n5; ++i) {
		fscanf(in5, "%d", &v5[i]);
	}
    
    int it5 = 1,count5 = 0;
    
    start5 = clock();
    for (int i = 0; i < n5; ++i) {   
        if(Prime(v5[i], it5) == 1){
             count5++;
            fprintf(out5,"%d ",v5[i]);
        } 
    }
    fprintf(out5,"\n%d",count5);

    end5 = clock();
    cpu_time5 = (double)(end5 - start5) * 1000 / CLOCKS_PER_SEC;
    printf("Time5: %f ms\n",cpu_time5);

    fclose(in5);
    fclose(out5);

    //Testul 6
    FILE *in6;
	FILE *out6;
	u_int32_t v6[500];
    int n6;
    clock_t start6, end6;
    double cpu_time6;

	in6 = fopen("in/test6.in", "rb");
	out6 = fopen("out/test6.out", "wb");

	fscanf(in6, "%d",&n6);

    for (int i = 0; i < n6; ++i) {
		fscanf(in6, "%d", &v6[i]);
	}
    
    int it6 = 3,count6 = 0;
    
    start6 = clock();
    for (int i = 0; i < n6; ++i) {   
        if(Prime(v6[i], it6) == 1){
             count6++;
            fprintf(out6,"%d ",v6[i]);
        } 
    }
    fprintf(out6,"\n%d",count6);

    end6 = clock();
    cpu_time6 = (double)(end6 - start6)  * 1000 / CLOCKS_PER_SEC;
    printf("Time6: %f ms\n",cpu_time6);

    fclose(in6);
    fclose(out6);

    //Testul 7
    FILE *in7;
	FILE *out7;
	u_int32_t v7[500];
    int n7;
    clock_t start7, end7;
    double cpu_time7;

	in7 = fopen("in/test7.in", "rb");
	out7 = fopen("out/test7.out", "wb");

	fscanf(in7, "%d",&n7);

    for (int i = 0; i < n7; ++i) {
		fscanf(in7, "%d", &v7[i]);
	}
    
    int it7 = 2,count7 = 0;
    
    start7 = clock();
    for (int i = 0; i < n7; ++i) {   
        if(Prime(v7[i], it7) == 1){
             count7++;
            fprintf(out7,"%d ",v7[i]);
        } 
    }
    fprintf(out7,"\n%d",count7);

    end7 = clock();
    cpu_time7 = (double)(end7 - start7)  * 1000 / CLOCKS_PER_SEC;
    printf("Time7: %f ms\n",cpu_time7);

    fclose(in7);
    fclose(out7);

    //Testul 8
    FILE *in8;
	FILE *out8;
	u_int32_t v8[500]; 
    int n8;
    clock_t start8, end8;
    double cpu_time8;

	in8 = fopen("in/test8.in", "rb");
	out8 = fopen("out/test8.out", "wb");

	fscanf(in8, "%d",&n8);

    for (int i = 0; i < n8; ++i) {
		fscanf(in8, "%d", &v8[i]);
	}
    
    int it8 = 4,count8 = 0;
    
    start8 = clock();
    for (int i = 0; i < n8; ++i) {   
        if(Prime(v8[i], it8) == 1){
             count8++;
            fprintf(out2,"%d ",v8[i]);
        } 
    }
    fprintf(out8,"\n%d",count8);

    end8 = clock();
    cpu_time8 = (double)(end8 - start8)  * 1000/ CLOCKS_PER_SEC;
    printf("Time8: %f ms\n",cpu_time8);

    fclose(in8);
    fclose(out8);

    //Testul 9
    FILE *in9;
	FILE *out9;
	u_int32_t v9[500];
    int  n9;
    clock_t start9, end9;
    double cpu_time9;

	in9 = fopen("in/test9.in", "rb");
	out9 = fopen("out/test9.out", "wb");

	fscanf(in9, "%d",&n9);

    for(int i = 0; i < n9; ++i) {
		fscanf(in9, "%d", &v9[i]);
	}
    
    int it9 = 9,count9 = 0;
    
    start9 = clock();
    for(int i = 0; i < n9; ++i) {   
        if(Prime(v9[i], it9) == 1){
             count9++;
            fprintf(out9,"%d ",v9[i]);
        } 
    }
    fprintf(out9,"\n%d",count9);

    end9 = clock();
    cpu_time9 = (double)(end9 - start9)  * 1000 / CLOCKS_PER_SEC;
    printf("Time9: %f ms\n",cpu_time9);

    fclose(in9);
    fclose(out9);

    //Testul 10
    FILE *in10;
	FILE *out10;
	u_int32_t v10[500];
    int n10;
    clock_t start10, end10;
    double cpu_time10;

	in10 = fopen("in/test10.in", "rb");
	out10 = fopen("out/test10.out", "wb");

	fscanf(in10, "%d",&n10);

    for(int i = 0; i < n10; ++i) {
		fscanf(in2, "%d", &v10[i]);
	}
    
    int it10 = 7,count10 = 0;
     
    start10 = clock();
    for(int i = 0; i < n10; ++i) {   
        if(Prime(v10[i], it10) == 1){
             count10++;
            fprintf(out10,"%d ",v10[i]);
        } 
    }
    fprintf(out10,"\n%d",count10);

    end10 = clock();
    cpu_time10 = (double)(end10 - start10)  * 1000 / CLOCKS_PER_SEC;
    printf("Time10: %f ms\n",cpu_time10);

    fclose(in10);
    fclose(out10);

    //Testul 11
    FILE *in11;
	FILE *out11;
	u_int32_t v11[500];
    int n11;
    clock_t start11, end11;
    double cpu_time11;

	in11 = fopen("in/test11.in", "rb");
	out11 = fopen("out/test11.out", "wb");

	fscanf(in11, "%d",&n11);

    for (int i = 0; i < n11; ++i) {
		fscanf(in11, "%d", &v11[i]);
	}
    
    int it11 = 7,count11 = 0;

    start11 = clock();
    for (int i = 0; i < n11; ++i) {   
        if(Prime(v11[i], it11) == 1){
             count11++;
            fprintf(out11,"%d ",v11[i]);
        } 
    }
    fprintf(out11,"\n%d",count11);

    end11 = clock();
    cpu_time11 = (double)(end11 - start11)  * 1000 / CLOCKS_PER_SEC;
    printf("Time11: %f ms\n",cpu_time11);

    fclose(in11);
    fclose(out11);

    //Testul 12
    FILE *in12;
	FILE *out12;
	u_int32_t v12[500];
    int n12;
    clock_t start12, end12;
    double cpu_time12;

	in12 = fopen("in/test12.in", "rb");
	out12 = fopen("out/test12.out", "wb");

	fscanf(in12, "%d",&n12);

    for (int i = 0; i < n12; ++i) {
		fscanf(in12, "%d", &v12[i]);
	}
    
    int it12 = 5,count12 = 0;
    
    start12 = clock();
    for (int i = 0; i < n12; ++i) {   
        if(Prime(v12[i], it12) == 1){
             count12++;
            fprintf(out12,"%d ",v12[i]);
        } 
    }
    fprintf(out12,"\n%d",count12);

    end12 = clock();
    cpu_time12 = (double)(end12 - start12)  * 1000 / CLOCKS_PER_SEC;
    printf("Time12: %f ms\n",cpu_time12);

    fclose(in12);
    fclose(out12);

    //Testul 13
    FILE *in13;
	FILE *out13;
	u_int32_t v13[500];
    int n13;
    clock_t start13, end13;
    double cpu_time13;

	in13 = fopen("in/test13.in", "rb");
	out13 = fopen("out/test13.out", "wb");

	fscanf(in13, "%d",&n13);
    
    start13 = clock();
    for (int i = 0; i < n13; ++i) {
		fscanf(in13, "%d", &v13[i]);
	}
    
    int it13 = 7,count13 = 0;

    for (int i = 0; i < n13; ++i) {   
        if(Prime(v13[i], it13) == 1){
             count13++;
            fprintf(out13,"%d ",v13[i]);
        } 
    }
    fprintf(out13,"\n%d",count13);

    end13 = clock();
    cpu_time13 = (double)(end13 - start13)  * 1000 / CLOCKS_PER_SEC;
    printf("Time13: %f ms\n",cpu_time13);

    fclose(in13);
    fclose(out13);

    //Testul 14
    FILE *in14;
	FILE *out14;
	u_int32_t v14[500];
    int n14;
    clock_t start14, end14;
    double cpu_time14;

	in14 = fopen("in/test14.in", "rb");
	out14 = fopen("out/test14.out", "wb");

	fscanf(in14, "%d",&n14);

    for (int i = 0; i < n14; ++i) {
		fscanf(in14, "%d", &v14[i]);
	}
    
    int it14 = 6,count14 = 0;

    start14 = clock();
    for (int i = 0; i < n14; ++i) {   
        if(Prime(v14[i], it14) == 1){
             count14++;
            fprintf(out14,"%d ",v14[i]);
        } 
    }
    fprintf(out14,"\n%d",count14);

    end14 = clock();
    cpu_time14 = (double)(end14 - start14)  * 1000/ CLOCKS_PER_SEC;
    printf("Time14: %f ms\n",cpu_time14);

    fclose(in14);
    fclose(out14);

    //Testul 15
    FILE *in15;
	FILE *out15;
	u_int32_t v15[500];
    int n15;
    clock_t start15, end15;
    double cpu_time15;

	in15 = fopen("in/test15.in", "rb");
	out15 = fopen("out/test15.out", "wb");

	fscanf(in15, "%d",&n15);

    for (int i = 0; i < n15; ++i) {
		fscanf(in15, "%d", &v15[i]);
	}
    
    int it15 = 10,count15 = 0;
 
    start15 = clock();
    for (int i = 0; i < n15; ++i) {   
        if(Prime(v15[i], it15) == 1){
             count15++;
            fprintf(out15,"%d ",v15[i]);
        } 
    }
    fprintf(out15,"\n%d",count15);

    end15 = clock();
    cpu_time15 = (double)(end15 - start15)  * 1000 / CLOCKS_PER_SEC;
    printf("Time15: %f ms\n",cpu_time15);

    fclose(in15);
    fclose(out15);

    //Testul 16
    FILE *in16;
	FILE *out16;
	u_int32_t v16[500];
    int n16;
    clock_t start16, end16;
    double cpu_time16;

	in16 = fopen("in/test16.in", "rb");
	out16 = fopen("out/test16.out", "wb");

	fscanf(in16, "%d",&n16);

    for (int i = 0; i < n16; ++i) {
		fscanf(in16, "%d", &v16[i]);
	}
    
    int it16 = 16,count16 = 0;
    
    start16 = clock();
    for (int i = 0; i < n16; ++i) {   
        if(Prime(v16[i], it16) == 1){
             count16++;
            fprintf(out16,"%d ",v16[i]);
        } 
    }
    fprintf(out16,"\n%d",count16);

    end16 = clock();
    cpu_time16 = (double)(end16 - start16)  * 1000/ CLOCKS_PER_SEC;
    printf("Time16: %f ms\n",cpu_time16);

    fclose(in16);
    fclose(out16);

    //Testul 17
    FILE *in17;
	FILE *out17;
	u_int32_t v17[500];
    int n17;
    clock_t start17, end17;
    double cpu_time17;

	in17 = fopen("in/test17.in", "rb");
	out17 = fopen("out/test17.out", "wb");

	fscanf(in17, "%d",&n17);

    for(int i = 0; i < n17; ++i) {
		fscanf(in17, "%d", &v17[i]);
	}
    
    int it17 = 18,count17 = 0;

    start17 = clock();
    for (int i = 0; i < n17; ++i) {   
        if(Prime(v17[i], it17) == 1){
             count17++;
            fprintf(out17,"%d ",v17[i]);
        } 
    }
    fprintf(out17,"\n%d",count17);

    end17 = clock();
    cpu_time17 = (double)(end17 - start17)  * 1000/ CLOCKS_PER_SEC;
    printf("Time17: %f ms\n",cpu_time17);

    fclose(in17);
    fclose(out17);

    //Testul 18
    FILE *in18;
	FILE *out18;
	u_int32_t v18[500];
    int n18;
    clock_t start18, end18;
    double cpu_time18;

	in18 = fopen("in/test18.in", "rb");
	out18 = fopen("out/test18.out", "wb");

	fscanf(in18, "%d",&n18);

    for (int i = 0; i < n18; ++i) {
		fscanf(in18, "%d", &v18[i]);
	}
    
    int it18 = 18,count18 = 0;
    
    start18 = clock();
    for (int i = 0; i < n18; ++i) {   
        if(Prime(v18[i], it18) == 1){
             count18++;
            fprintf(out18,"%d ",v18[i]);
        } 
    }
    fprintf(out18,"\n%d",count18);

    end18 = clock();
    cpu_time18 = (double)(end18 - start18) * 1000 / CLOCKS_PER_SEC;
    printf("Time18: %f ms\n",cpu_time18);

    fclose(in18);
    fclose(out18);

    //Testul 19
    FILE *in19;
	FILE *out19;
	u_int32_t v19[500];
    int n19;
    clock_t start19, end19;
    double cpu_time19;

	in19 = fopen("in/test19.in", "rb");
	out19 = fopen("out/test19.out", "wb");

	fscanf(in19, "%d",&n19);

    for (int i = 0; i < n19; ++i) {
		fscanf(in19, "%d", &v19[i]);
	}
    
    int it19 = 20,count19 = 0;
    
    start19 = clock();
    for (int i = 0; i < n19; ++i) {   
        if(Prime(v19[i], it19) == 1){
             count19++;
            fprintf(out19,"%d ",v19[i]);
        } 
    }
    fprintf(out19,"\n%d",count19);

    end19 = clock();
    cpu_time19 = (double)(end19 - start19) * 1000 / CLOCKS_PER_SEC;
    printf("Time19: %f ms\n",cpu_time19);

    fclose(in19);
    fclose(out19);

    return 0;
    
}

    
    
	