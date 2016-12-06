#ifndef TONAV_CHI_SQUARED_PPM_H
#define TONAV_CHI_SQUARED_PPM_H

static double CHI_SQUARED_PPM_VALUES[] = {NAN, 3.84145882069, 5.99146454711, 7.81472790325, 9.48772903678, 11.0704976935, 12.5915872437, 14.0671404493, 15.5073130559, 16.9189776046, 18.3070380533, 19.6751375727, 21.0260698175, 22.3620324948, 23.6847913048, 24.9957901397, 26.2962276049, 27.5871116383, 28.8692994304, 30.1435272056, 31.4104328442, 32.6705733409, 33.9244384714, 35.1724616269, 36.4150285018, 37.6524841335, 38.8851386598, 40.1132720694, 41.3371381514, 42.5569678043, 43.7729718257, 44.9853432804, 46.1942595203, 47.3998839191, 48.6023673673, 49.8018495682, 50.9984601657, 52.1923197301, 53.383540623, 54.5722277589, 55.7584792789, 56.9423871468, 58.1240376809, 59.3035120269, 60.4808865823, 61.6562333763, 62.8296204114, 64.0011119722, 65.1707689036, 66.338648863, 67.5048065495, 68.6692939123, 69.8321603398, 70.9934528338, 72.153216167, 73.3114930291, 74.4683241593, 75.6237484694, 76.7778031561, 77.9305238052, 79.0819444878, 80.2320978488, 81.3810151889, 82.5287265415, 83.6752607427, 84.8206454977, 85.9649074412, 87.1080721953, 88.2501644219, 89.3912078725, 90.5312254349, 91.6702391761, 92.8082703831, 93.9453396012, 95.0814666692, 96.2166707535, 97.350970379, 98.4843834593, 99.6169273243, 100.748618746, 101.879473965, 103.009508712, 104.13873823, 105.267177297, 106.394840243, 107.521740971, 108.647892974, 109.77330935, 110.898002823, 112.02198575, 113.145270143, 114.267867677, 115.389789708, 116.511047281, 117.631651142, 118.751611753, 119.870939299, 120.989643697, 122.10773461, 123.225221453, 124.342113404, 125.458419408, 126.574148191, 127.689308263, 128.803907927, 129.917955286, 131.03145825, 132.144424541, 133.256861702, 134.368777098, 135.480177928, 136.591071225, 137.701463863, 138.811362564, 139.920773898, 141.029704294, 142.138160039, 143.246147284, 144.353672048, 145.460740225, 146.567357581, 147.673529764, 148.779262304, 149.884560619, 150.989430016, 152.093875692, 153.197902744, 154.301516165, 155.404720851, 156.507521602, 157.609923123, 158.71193003, 159.813546851, 160.914778027, 162.015627916, 163.116100794, 164.216200858, 165.315932228, 166.415298949, 167.514304991, 168.612954254, 169.711250567, 170.809197692, 171.906799324, 173.004059094, 174.10098057, 175.197567256, 176.2938226, 177.389749987, 178.485352747, 179.580634154, 180.675597428, 181.770245733, 182.864582183, 183.958609841, 185.052331719, 186.145750781, 187.238869945, 188.331692079, 189.424220009, 190.516456514, 191.608404331, 192.700066153, 193.791444633, 194.882542383, 195.973361974, 197.063905939, 198.154176771, 199.244176929, 200.333908833, 201.423374867, 202.51257738, 203.601518688, 204.690201072, 205.77862678, 206.866798028, 207.954717001, 209.042385851, 210.129806702, 211.216981646, 212.303912747, 213.39060204, 214.477051531, 215.563263199, 216.649238998, 217.734980851, 218.82049066, 219.905770297, 220.990821611, 222.075646427, 223.160246544, 224.244623739, 225.328779765, 226.412716352, 227.496435208, 228.579938018, 229.663226447, 230.746302137, 231.829166711, 232.911821768, 233.994268892, 235.076509644, 236.158545564, 237.240378177, 238.322008987, 239.403439478, 240.48467112, 241.56570536, 242.646543633, 243.727187352, 244.807637915, 245.887896705, 246.967965085, 248.047844405, 249.127535998, 250.20704118, 251.286361255, 252.365497509, 253.444451215, 254.523223629, 255.601815995, 256.680229542, 257.758465485, 258.836525025, 259.91440935, 260.992119636, 262.069657043, 263.14702272, 264.224217804, 265.301243417, 266.378100672, 267.454790666, 268.531314489, 269.607673214, 270.683867906, 271.759899619, 272.835769392, 273.911478257, 274.987027233, 276.062417329, 277.137649543, 278.212724862, 279.287644265, 280.362408719, 281.43701918, 282.511476598, 283.58578191, 284.659936043, 285.733939918, 286.807794444, 287.881500522, 288.955059043, 290.028470889, 291.101736936, 292.174858047, 293.247835081, 294.320668884, 295.393360298, 296.465910154, 297.538319276, 298.61058848, 299.682718573, 300.754710357, 301.826564623, 302.898282157, 303.969863736, 305.041310131, 306.112622105, 307.183800413, 308.254845804, 309.325759021, 310.396540798, 311.467191863, 312.537712938, 313.608104738, 314.678367972, 315.74850334, 316.818511539, 317.888393257, 318.958149179, 320.02777998, 321.097286332, 322.1666689, 323.235928343, 324.305065313, 325.374080458, 326.442974421, 327.511747837, 328.580401336, 329.648935545, 330.717351081, 331.785648561, 332.853828593, 333.92189178, 334.989838722, 336.057670012, 337.125386238, 338.192987985, 339.260475831, 340.327850349, 341.395112109, 342.462261675, 343.529299606, 344.596226458, 345.66304278, 346.729749119, 347.796346017, 348.862834008, 349.929213628, 350.995485403, 352.061649857, 353.127707511, 354.19365888, 355.259504475, 356.325244803, 357.390880368, 358.456411669, 359.521839201, 360.587163456, 361.652384922, 362.717504081, 363.782521414, 364.847437398, 365.912252504, 366.976967201, 368.041581955, 369.106097228, 370.170513476, 371.234831156, 372.299050718, 373.363172609, 374.427197275, 375.491125155, 376.554956688, 377.618692308, 378.682332446, 379.745877529, 380.809327983, 381.872684229, 382.935946686, 383.999115768, 385.062191888, 386.125175455, 387.188066875, 388.250866552, 389.313574886, 390.376192275, 391.438719112, 392.50115579, 393.563502698, 394.625760221, 395.687928743, 396.750008645, 397.812000304, 398.873904096, 399.935720394, 400.997449566, 402.059091982, 403.120648004, 404.182117997, 405.243502318, 406.304801327, 407.366015376, 408.427144819, 409.488190006, 410.549151283, 411.610028997, 412.670823489, 413.731535099, 414.792164168, 415.852711028, 416.913176016, 417.97355946, 419.033861692, 420.094083036, 421.154223819, 422.214284362, 423.274264986, 424.334166009, 425.393987748, 426.453730515, 427.513394623, 428.572980382, 429.6324881, 430.691918082, 431.751270633, 432.810546054, 433.869744645, 434.928866705, 435.987912528, 437.046882411, 438.105776643, 439.164595517, 440.223339321, 441.282008341, 442.340602862, 443.399123167, 444.457569538, 445.515942254, 446.574241593, 447.632467831, 448.690621242, 449.748702099, 450.806710672, 451.864647232, 452.922512044, 453.980305376, 455.038027492, 456.095678654, 457.153259123, 458.210769159, 459.268209019, 460.32557896, 461.382879237, 462.440110102, 463.497271807, 464.554364603, 465.611388737, 466.668344458, 467.725232011, 468.782051639, 469.838803587, 470.895488094, 471.952105401, 473.008655746, 474.065139367, 475.121556498, 476.177907375, 477.23419223, 478.290411294, 479.346564798, 480.402652971, 481.45867604, 482.514634231, 483.570527769, 484.626356878, 485.68212178, 486.737822696, 487.793459846, 488.849033448, 489.90454372, 490.959990877, 492.015375134, 493.070696706, 494.125955804, 495.181152639, 496.236287422, 497.291360361, 498.346371664, 499.401321537, 500.456210187, 501.511037816, 502.565804628, 503.620510825, 504.675156608, 505.729742176, 506.784267728, 507.838733462, 508.893139575, 509.94748626, 511.001773713, 512.056002128, 513.110171695, 514.164282607, 515.218335053, 516.272329223, 517.326265305, 518.380143485, 519.43396395, 520.487726885, 521.541432474, 522.5950809, 523.648672346, 524.702206992, 525.755685019, 526.809106605, 527.86247193, 528.91578117, 529.969034503, 531.022232103, 532.075374145, 533.128460804, 534.181492251, 535.234468659, 536.287390198, 537.340257039, 538.393069352, 539.445827304, 540.498531062, 541.551180795, 542.603776667, 543.656318843, 544.708807488, 545.761242764, 546.813624835, 547.865953862, 548.918230005, 549.970453425, 551.022624281, 552.074742732, 553.126808934, 554.178823045, 555.230785221, 556.282695617, 557.334554388, 558.386361687, 559.438117667, 560.48982248, 561.541476279, 562.593079213, 563.644631433, 564.696133087, 565.747584325, 566.798985293, 567.85033614, 568.901637012, 569.952888053, 571.00408941, 572.055241225, 573.106343644, 574.157396808, 575.20840086, 576.259355941, 577.310262192, 578.361119753, 579.411928764, 580.462689363, 581.513401688, 582.564065878, 583.614682068, 584.665250395, 585.715770994, 586.766244001, 587.81666955, 588.867047773, 589.917378805, 590.967662777, 592.017899822, 593.06809007, 594.118233652, 595.168330698, 596.218381337, 597.268385698, 598.318343909, 599.368256098, 600.418122392, 601.467942916, 602.517717798, 603.567447161, 604.617131131, 605.666769831, 606.716363386, 607.765911918, 608.81541555, 609.864874403, 610.914288598, 611.963658258, 613.0129835, 614.062264447, 615.111501215, 616.160693925, 617.209842694, 618.25894764, 619.308008879, 620.357026528, 621.406000704, 622.454931521, 623.503819095, 624.55266354, 625.60146497, 626.650223498, 627.698939238, 628.747612302, 629.796242801, 630.844830848, 631.893376553, 632.941880026, 633.990341379, 635.03876072, 636.087138158, 637.135473802, 638.18376776, 639.23202014, 640.280231049, 641.328400594, 642.376528881, 643.424616016, 644.472662104, 645.52066725, 646.568631559, 647.616555135, 648.664438081, 649.7122805, 650.760082496, 651.80784417, 652.855565624, 653.903246961, 654.95088828, 655.998489682, 657.046051268, 658.093573138, 659.14105539, 660.188498123, 661.235901437, 662.283265429, 663.330590197, 664.377875838, 665.425122449, 666.472330126, 667.519498966, 668.566629064, 669.613720517, 670.660773417, 671.707787861, 672.754763942, 673.801701753, 674.848601389, 675.895462943, 676.942286506, 677.989072172, 679.035820032, 680.082530177, 681.129202699, 682.175837688, 683.222435236, 684.268995431, 685.315518364, 686.362004123, 687.408452799, 688.454864479, 689.501239252, 690.547577206, 691.593878427, 692.640143004, 693.686371024, 694.732562572, 695.778717736, 696.8248366, 697.87091925, 698.916965772, 699.962976251, 701.00895077, 702.054889415, 703.100792268, 704.146659414, 705.192490935, 706.238286915, 707.284047437, 708.329772581, 709.375462431, 710.421117067, 711.466736572, 712.512321026, 713.557870509, 714.603385103, 715.648864887, 716.694309941, 717.739720344, 718.785096176, 719.830437515, 720.87574444, 721.921017029, 722.966255361, 724.011459512, 725.05662956, 726.101765582, 727.146867656, 728.191935856, 729.236970261, 730.281970945, 731.326937984, 732.371871454, 733.416771429, 734.461637985, 735.506471196, 736.551271136, 737.596037879, 738.640771499, 739.685472069, 740.730139662, 741.774774352, 742.81937621, 743.86394531, 744.908481723, 745.952985521, 746.997456776, 748.041895559, 749.08630194, 750.130675992, 751.175017783, 752.219327385, 753.263604868, 754.307850301, 755.352063753, 756.396245295, 757.440394994, 758.48451292, 759.528599142, 760.572653727, 761.616676743, 762.660668259, 763.704628341, 764.748557058, 765.792454476, 766.836320661, 767.880155681, 768.923959602, 769.96773249, 771.011474411, 772.05518543, 773.098865612, 774.142515024, 775.18613373, 776.229721794, 777.273279282, 778.316806257, 779.360302783, 780.403768924, 781.447204745, 782.490610307, 783.533985675, 784.577330911, 785.620646078, 786.663931238, 787.707186454, 788.750411788, 789.793607302, 790.836773057, 791.879909114, 792.923015535, 793.966092382, 795.009139714, 796.052157592, 797.095146077, 798.138105228, 799.181035107, 800.223935772, 801.266807283, 802.309649699, 803.35246308, 804.395247485, 805.438002972, 806.4807296, 807.523427427, 808.566096512, 809.608736911, 810.651348684, 811.693931888, 812.73648658, 813.779012817, 814.821510657, 815.863980155, 816.906421369, 817.948834356, 818.991219171, 820.03357587, 821.07590451, 822.118205145, 823.160477833, 824.202722627, 825.244939583, 826.287128756, 827.329290201, 828.371423973, 829.413530125, 830.455608712, 831.497659788, 832.539683407, 833.581679623, 834.62364849, 835.665590059, 836.707504386, 837.749391522, 838.791251521, 839.833084436, 840.874890318, 841.916669221, 842.958421195, 844.000146295, 845.04184457, 846.083516073, 847.125160856, 848.166778969, 849.208370464, 850.249935392, 851.291473804, 852.33298575, 853.374471281, 854.415930447, 855.457363299, 856.498769886, 857.540150258, 858.581504466, 859.622832559, 860.664134585, 861.705410595, 862.746660638, 863.787884762, 864.829083016, 865.870255449, 866.911402109, 867.952523045, 868.993618305, 870.034687937, 871.075731989, 872.116750508, 873.157743542, 874.198711139, 875.239653346, 876.28057021, 877.321461778, 878.362328097, 879.403169213, 880.443985173, 881.484776024, 882.525541812, 883.566282583, 884.606998383, 885.647689258, 886.688355254, 887.728996415, 888.769612789, 889.810204419, 890.850771351, 891.891313631, 892.931831302, 893.97232441, 895.012793, 896.053237115, 897.093656801, 898.134052101, 899.17442306, 900.214769721, 901.255092128, 902.295390326, 903.335664356, 904.375914264, 905.416140092, 906.456341884, 907.496519682, 908.536673529, 909.576803468, 910.616909543, 911.656991794, 912.697050265, 913.737084999, 914.777096036, 915.81708342, 916.857047191, 917.896987393, 918.936904066, 919.976797252, 921.016666993, 922.056513329, 923.096336302, 924.136135953, 925.175912323, 926.215665453, 927.255395383, 928.295102154, 929.334785807, 930.374446381, 931.414083917, 932.453698455, 933.493290036, 934.532858698, 935.572404482, 936.611927427, 937.651427573, 938.690904959, 939.730359625, 940.769791609, 941.809200952, 942.848587691, 943.887951865, 944.927293514, 945.966612676, 947.005909389, 948.045183693, 949.084435624, 950.123665222, 951.162872524, 952.202057569, 953.241220394, 954.280361037, 955.319479536, 956.358575927, 957.39765025, 958.436702541, 959.475732836, 960.514741174, 961.553727592, 962.592692126, 963.631634813, 964.670555689, 965.709454792, 966.748332158, 967.787187823, 968.826021824, 969.864834197, 970.903624977, 971.942394202, 972.981141906, 974.019868126, 975.058572897, 976.097256255, 977.135918235, 978.174558873, 979.213178204, 980.251776264, 981.290353087, 982.328908708, 983.367443162, 984.405956485, 985.444448711, 986.482919874, 987.521370009, 988.559799151, 989.598207334, 990.636594591, 991.674960958, 992.713306469, 993.751631156, 994.789935055, 995.828218199, 996.866480622, 997.904722356, 998.942943437, 999.981143897, 1001.01932377, 1002.05748309, 1003.09562189, 1004.13374019, 1005.17183805, 1006.20991548, 1007.24797253, 1008.28600921, 1009.32402557, 1010.36202165, 1011.39999746, 1012.43795304, 1013.47588844, 1014.51380367, 1015.55169877, 1016.58957377, 1017.6274287, 1018.66526361, 1019.70307851, 1020.74087344, 1021.77864843, 1022.81640351, 1023.85413871, 1024.89185408, 1025.92954962, 1026.96722539, 1028.00488141, 1029.0425177, 1030.08013431, 1031.11773125, 1032.15530857, 1033.1928663, 1034.23040445, 1035.26792308, 1036.30542219, 1037.34290183, 1038.38036203, 1039.41780281, 1040.45522421, 1041.49262626, 1042.53000898, 1043.56737241, 1044.60471657, 1045.6420415, 1046.67934722, 1047.71663377, 1048.75390117, 1049.79114946, 1050.82837866, 1051.8655888, 1052.90277992, 1053.93995203, 1054.97710518, 1056.01423938, 1057.05135468, 1058.08845109, 1059.12552864, 1060.16258737, 1061.1996273, 1062.23664847, 1063.27365089, 1064.3106346, 1065.34759963, 1066.38454601, 1067.42147376, 1068.45838291, 1069.49527348, 1070.53214552, 1071.56899904, 1072.60583408, 1073.64265066};

#endif //TONAV_CHI_SQUARED_PPM_H