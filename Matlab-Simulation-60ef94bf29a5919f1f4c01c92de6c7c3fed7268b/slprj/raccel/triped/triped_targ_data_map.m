  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtP)
    ;%
      section.nData     = 33;
      section.data(33)  = dumData; %prealloc
      
	  ;% rtP.SineWave_Amp
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.SineWave_Bias
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.SineWave_Freq
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.SineWave_Phase
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtP.cos_Amp
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtP.cos_Bias
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtP.cos_Freq
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtP.cos_Phase
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtP.Gain_Gain
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtP.Gain_Gain_lf1hkkhtnn
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtP.Gain1_Gain
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtP.Gain1_Gain_n4cvaldzyx
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtP.Gain_Gain_krn1x3gc2r
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtP.Gain_Gain_kvivx2t5tl
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtP.Gain1_Gain_amreev2b1i
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtP.Gain1_Gain_k41kpwc3hi
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtP.Gain_Gain_mapktpvvuh
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtP.Gain_Gain_ehckjz1434
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtP.Gain1_Gain_itppknz00q
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtP.Gain1_Gain_h3sey3zqp2
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtP.Constant_Value
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtP.Constant3_Value
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtP.Constant4_Value
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtP.Constant5_Value
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 23;
	
	  ;% rtP.Constant_Value_pgin54o4vu
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 24;
	
	  ;% rtP.Constant1_Value
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 25;
	
	  ;% rtP.Constant6_Value
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 26;
	
	  ;% rtP.Constant7_Value
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 27;
	
	  ;% rtP.Constant8_Value
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 28;
	
	  ;% rtP.Constant10_Value
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 29;
	
	  ;% rtP.Constant11_Value
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 30;
	
	  ;% rtP.Constant2_Value
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 31;
	
	  ;% rtP.Constant9_Value
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 32;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 3;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtB)
    ;%
      section.nData     = 23;
      section.data(23)  = dumData; %prealloc
      
	  ;% rtB.emix4wr52y
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.kdnyrfmwwa
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.mjmtgjjzzj
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtB.iqgj4cowyc
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 6;
	
	  ;% rtB.p2qawryk4y
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 7;
	
	  ;% rtB.ey5rpjheu5
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 8;
	
	  ;% rtB.jbflhrvxr3
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 12;
	
	  ;% rtB.o3caeg22xm
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 13;
	
	  ;% rtB.d4pikybbay
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 14;
	
	  ;% rtB.jgqcqpxn4x
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 18;
	
	  ;% rtB.cdjd2gowev
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 22;
	
	  ;% rtB.nk4fjtzt35
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 23;
	
	  ;% rtB.am4ocgktdw
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 27;
	
	  ;% rtB.d3anamivak
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 28;
	
	  ;% rtB.hmjbsyhvew
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 32;
	
	  ;% rtB.kcw4co0adz
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 36;
	
	  ;% rtB.bvc43hgq3b
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 37;
	
	  ;% rtB.aa23nqqdmc
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 41;
	
	  ;% rtB.mhtigldxbi
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 42;
	
	  ;% rtB.m2ws5ju1b4
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 46;
	
	  ;% rtB.fvdszxdfmk
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 121;
	
	  ;% rtB.heotptkrgn
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 238;
	
	  ;% rtB.efjglo0jpm
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 239;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtB.iu53rp0sko.ovgwheqnqh
	  section.data(1).logicalSrcIdx = 23;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.iu53rp0sko.j0rc1se3o4
	  section.data(2).logicalSrcIdx = 24;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.iu53rp0sko.ntyw452pod
	  section.data(3).logicalSrcIdx = 25;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtB.lolmohwkmq.ovgwheqnqh
	  section.data(1).logicalSrcIdx = 26;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.lolmohwkmq.j0rc1se3o4
	  section.data(2).logicalSrcIdx = 27;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.lolmohwkmq.ntyw452pod
	  section.data(3).logicalSrcIdx = 28;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 4;
    sectIdxOffset = 3;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtDW)
    ;%
      section.nData     = 20;
      section.data(20)  = dumData; %prealloc
      
	  ;% rtDW.jgjp1fusts
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.jopmtehazu
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.pdizpebcrn
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.fcytalkur3
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.huv3xhr2xb
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.mznnwa3jrm
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.fs1jne3mev
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.gja3qfiayv
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.mb1tkpm0oo
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.liafyk0sq0
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.nlprusk0lb
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.e3wlnzdn2r
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.imp34ktok4
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.fegt1ehs0h
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtDW.naplv55ipv
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtDW.p55ar3qyut
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtDW.pbcfqgaa1q
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtDW.dcf5utnyxc
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtDW.fx5xo5lbmd
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtDW.bj5e50514f
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 21;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 11;
      section.data(11)  = dumData; %prealloc
      
	  ;% rtDW.gwpbgup500
	  section.data(1).logicalSrcIdx = 20;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.luvxugyja4
	  section.data(2).logicalSrcIdx = 21;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.k00imi24sj
	  section.data(3).logicalSrcIdx = 22;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.j22zyci1aw
	  section.data(4).logicalSrcIdx = 23;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.gfhtaqqca1
	  section.data(5).logicalSrcIdx = 24;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.kia1gcj0ok
	  section.data(6).logicalSrcIdx = 25;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.psowfugydz
	  section.data(7).logicalSrcIdx = 26;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.bir0wi3sel
	  section.data(8).logicalSrcIdx = 27;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.n4k3ocl5yz
	  section.data(9).logicalSrcIdx = 28;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.io15cqjhbz
	  section.data(10).logicalSrcIdx = 29;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.dyia41epsz.LoggedData
	  section.data(11).logicalSrcIdx = 30;
	  section.data(11).dtTransOffset = 10;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtDW.og2zcxhium
	  section.data(1).logicalSrcIdx = 31;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.cjwakeaooj
	  section.data(2).logicalSrcIdx = 32;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtDW.mdfbbrpo0b
	  section.data(1).logicalSrcIdx = 33;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.etadvbosjv
	  section.data(2).logicalSrcIdx = 34;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 223868464;
  targMap.checksum1 = 1825467118;
  targMap.checksum2 = 79481394;
  targMap.checksum3 = 920024568;

