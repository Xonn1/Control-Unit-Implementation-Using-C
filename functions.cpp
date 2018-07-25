//
// Created by Sonni on 29/06/2018.
//
#include "header.h"
int mbr_Counter=0;
int mar_Counter=0;
int ioBR_Counter=0;
int ioAR_Counter=0;
Control_Unit::Control_Unit() {
     MBR = {0};
     IO_BR = {0};
     MAR ={0};
     IO_AR ={0};
}

int Control_Unit::getMBR() {
    return MBR[mbr_Counter-1];
}

int Control_Unit::getMAR() {
    return MAR[mar_Counter-1];
}

int Control_Unit::getIO_BR() {
    return IO_BR[ioBR_Counter-1];
}

int Control_Unit::getIO_AR() {
    return IO_AR[ioAR_Counter-1];
}

int Control_Unit::getAccumulator() {
    return accumulator;
}

int Control_Unit::CU(unsigned int INST,unsigned int mode) {

    //MAIN MEMORY
     if(mode == 6 ){                    //WB
          cout<<"Executing Write to Buffer"<<endl;
          cout<<"Value Entered: "<<bitset<8>(INST)<<endl;
          MBR[mbr_Counter] = INST;
          cout<<"INST CODE: "<<bitset<5>(mode)<<endl;
          cout<<"MBR: "<<bitset<8>(MBR[mbr_Counter])<<endl;
          cout<<"MAR: "<<bitset<12>(MAR[mar_Counter])<<endl;
          mbr_Counter++;
     }
     else if(mode == 1){                //WM
          cout<<"Executing Write to Memory"<<endl;
          cout<<"Value Entered: "<<bitset<12>(INST)<<endl;
          MAR[mar_Counter] = INST;
          cout<<"INST CODE: "<<bitset<5>(mode)<<endl;
          cout<<"MBR: "<<bitset<8>(MBR[mbr_Counter-1])<<endl;
          cout<<"MAR: "<<bitset<12>(MAR[mar_Counter])<<endl;
          mar_Counter++;
     }
     else if(mode == 2){                //RM
          cout<<"Executing Read from Memory"<<endl;
          cout<<"Value Entered: "<<bitset<12>(INST)<<endl;
          cout<<"INST CODE: "<<bitset<5>(mode)<<endl;
          for(int count = 0; count<MAR.size();count++){
               if(MAR[count] == INST){
                    cout<<"MBR: "<<bitset<8>(MBR[count])<<endl;
                    cout<<"MAR: "<<bitset<12>(MAR[count])<<endl;
               }
          }
     }
     else if(mode == 3){                //BR
          cout<<"Executing Branch"<<endl;
          cout<<"Value Entered: "<<bitset<12>(INST)<<endl;
          cout<<"INST CODE: "<<bitset<5>(mode)<<endl;
          if(!INST){
              cout<<"MBR: "<<bitset<8>(INST)<<endl;
              cout<<"MAR: "<<bitset<12>(INST)<<endl;
          }
          else{
              for(int count = 0; count<MBR.size();count++){
                  if(MBR[count] == INST){
                      cout<<"MBR: "<<bitset<8>(MBR[count])<<endl;
                      cout<<"MAR: "<<bitset<12>(MAR[count])<<endl;
                  }
              }
          }
     }
     else if(mode == 24){               //BRE
         cout<<"Executing Branch Equal"<<endl;
         cout<<"Value Entered: "<<bitset<12>(INST)<<endl;
         cout<<"INST CODE: "<<bitset<5>(mode)<<endl;
         if(!INST){
             cout<<"MBR: "<<bitset<8>(INST)<<endl;
             cout<<"MAR: "<<bitset<12>(INST)<<endl;
         }
         else{
             for(int count = 0; count<MBR.size();count++){
                 if(MBR[count] == INST){
                     if(MBR[count] == accumulator){
                         cout<<"MBR: "<<bitset<8>(MBR[count])<<endl;
                         cout<<"MAR: "<<bitset<12>(MAR[count])<<endl;
                         return 1;
                     }
                 }
             }
         }
     }
     else if(mode == 25){               //BRNE
         cout<<"Executing Branch Not Equal"<<endl;
         cout<<"Value Entered: "<<bitset<12>(INST)<<endl;
         cout<<"INST CODE: "<<bitset<5>(mode)<<endl;
         if(!INST){
             cout<<"MBR: "<<bitset<8>(INST)<<endl;
             cout<<"MAR: "<<bitset<12>(INST)<<endl;
         }
         else{
             for(int count = 0; count<MBR.size();count++){
                 if(MBR[count] == INST){
                     if(MBR[count] == accumulator){
                         cout<<"MBR: "<<bitset<8>(MBR[count])<<endl;
                         cout<<"MAR: "<<bitset<12>(MAR[count])<<endl;
                         return 1;
                     }
                 }
             }
         }
     }
     else if(mode == 26){               //BRGT
         cout<<"Executing Branch Greater Than Accumulator "<<endl;
         cout<<"Value Entered: "<<bitset<12>(INST)<<endl;
         cout<<"INST CODE: "<<bitset<5>(mode)<<endl;
         if(!INST){
             cout<<"MBR: "<<bitset<8>(INST)<<endl;
             cout<<"MAR: "<<bitset<12>(INST)<<endl;
         }
         else{
             for(int count = 0; count<MBR.size();count++){
                 if(MBR[count] == INST){
                     if(MBR[count] == accumulator){
                         cout<<"MBR: "<<bitset<8>(MBR[count])<<endl;
                         cout<<"MAR: "<<bitset<12>(MAR[count])<<endl;
                         return 1;
                     }
                 }
             }
         }
     }
     else if(mode == 27){               //BRLT
         cout<<"Executing Branch Lesser Than Accumulator "<<endl;
         cout<<"Value Entered: "<<bitset<12>(INST)<<endl;
         cout<<"INST CODE: "<<bitset<5>(mode)<<endl;
         if(!INST){
             cout<<"MBR: "<<bitset<8>(INST)<<endl;
             cout<<"MAR: "<<bitset<12>(INST)<<endl;
         }
         else{
             for(int count = 0; count<MBR.size();count++){
                 if(MBR[count] == INST){
                     if(MBR[count] == accumulator){
                         cout<<"MBR: "<<bitset<8>(MBR[count])<<endl;
                         cout<<"MAR: "<<bitset<12>(MAR[count])<<endl;
                         return 1;
                     }
                 }
             }
         }
     }
     //IO MEMORY
     else if(mode == 4){            //RIO
         cout<<"Executing Read form IO"<<endl;
         cout<<"Value Entered: "<<bitset<12>(INST)<<endl;
         cout<<"INST CODE: "<<bitset<5>(mode)<<endl;
         for(int count = 0; count<IO_AR.size();count++){
             if(IO_AR[count] == INST){
                 cout<<"IO AR: "<<bitset<8>(IO_AR[count])<<endl;
             }
         }
     }
     else if(mode == 5){            //WIO
         cout<<"Executing Write to IO"<<endl;
         cout<<"Value Entered: "<<bitset<12>(INST)<<endl;
         cout<<"INST CODE: "<<bitset<5>(mode)<<endl;
         IO_AR[ioAR_Counter] = INST;
         cout<<"IO AR:"<<bitset<12>(IO_AR[ioAR_Counter])<<endl;
         ioAR_Counter++;
     }
     else if(mode == 7){                //WIB
         cout<<"Executing Write to IO Buffer"<<endl;
         cout<<"Value Entered: "<<bitset<12>(INST)<<endl;
         IO_BR[ioBR_Counter] = INST;
         cout<<"INST CODE: "<<bitset<5>(mode)<<endl;
         cout<<"IO BR: "<<bitset<8>(IO_BR[ioBR_Counter])<<endl;
         ioBR_Counter++;
     }
     else if(mode==10){         //Addition
         cout<<"Executing Addition"<<endl;
         cout<<"Current Accumulator Value(binary): "<<bitset<16>(accumulator)<<endl;
         cout<<"Current Accumulator Value(Hex): "<<hex<<accumulator<<endl;
         accumulator+= MBR[mbr_Counter-1];
         cout<<"New Accumulator Value(binary):"<<bitset<16>(accumulator)<<endl;
         cout<<"New Accumulator Value(Hex):"<<hex<<accumulator<<endl;
     }
     else if(mode==11){         //subtraction;
         if(accumulator<MBR[mbr_Counter-1]){
             cout<<"Accumulator Cannot Be Less Than 0"<<endl;
         }
         else{
             cout<<"Executing Subtraction"<<endl;
             cout<<"Current Accumulator Value(Binary): "<<bitset<18>(accumulator)<<endl;
             cout<<"Current Accumulator Value(Hex): "<<hex<<accumulator<<endl;
            accumulator-=MBR[mbr_Counter-1];
             cout<<"New Accumulator Value(binary): "<<bitset<18>(accumulator)<<endl;
             cout<<"New Accumulator Value(Hex):"<<hex<<accumulator<<endl;
         }
     }
     else if(mode==12){       //Multiplication
         cout<<"Executing Multiplication"<<endl;
         cout<<"Current Accumulator Value(Binary): "<<bitset<18>(accumulator)<<endl;
         cout<<"Current Accumulator Value(Hex): "<<hex<<accumulator<<endl;
         accumulator *= MBR[mbr_Counter-1];
         cout<<"New Accumulator Value(binary): "<<bitset<18>(accumulator)<<endl;
         cout<<"New Accumulator Value(Hex):"<<hex<<accumulator<<endl;
     }
     else if(mode ==13){      //Division
         cout<<"Executing Division"<<endl;
         cout<<"Current Accumulator Value(Binary): "<<bitset<16>(accumulator)<<endl;
         cout<<"Current Accumulator Value(Hex): "<<bitset<16>(accumulator)<<endl;
         accumulator/=MBR[mbr_Counter-1];
         int remainder = accumulator % MBR[mbr_Counter-1];
         cout<<"New Accumulator Value(Binary): "<<bitset<16>(accumulator)<<" Remainder(Binary): "<<bitset<16>(remainder)<<endl;
         cout<<"New Accumulator Value(Hex): "<<hex<<accumulator<<" Remainder(Hex): "<<hex<<remainder<<endl;
     }
     else if(mode ==20){      //XOR
         cout<<"Executing Exclusive OR"<<endl;
         cout<<"Current Accumulator Value(Binary): "<<bitset<16>(accumulator)<<endl;
         cout<<"Current Accumulator Value(Hex): "<<bitset<16>(accumulator)<<endl;
         accumulator^=MBR[mbr_Counter-1];
         cout<<"New Accumulator Value(Binary): "<<bitset<16>(accumulator)<<endl;
         cout<<"New Accumulator Value(Hex): "<<hex<<accumulator<<endl;
     }
     else if(mode==21){     //AND
         cout<<"Executing AND"<<endl;
         cout<<"Current Accumulator Value(Binary): "<<bitset<16>(accumulator)<<endl;
         cout<<"Current Accumulator Value(Hex): "<<bitset<16>(accumulator)<<endl;
         accumulator&=MBR[mbr_Counter-1];
         cout<<"New Accumulator Value(Binary): "<<bitset<16>(accumulator)<<endl;
         cout<<"New Accumulator Value(Hex): "<<hex<<accumulator<<endl;
     }
     else if(mode==22){     //OR
         cout<<"Executing OR"<<endl;
         cout<<"Current Accumulator Value(Binary): "<<bitset<16>(accumulator)<<endl;
         cout<<"Current Accumulator Value(Hex): "<<bitset<16>(accumulator)<<endl;
         accumulator|=MBR[mbr_Counter-1];
         cout<<"New Accumulator Value(Binary): "<<bitset<16>(accumulator)<<endl;
         cout<<"New Accumulator Value(Hex): "<<hex<<accumulator<<endl;
     }
     else if(mode==23){     //NOT
         cout<<"Executing NOT"<<endl;
         cout<<"Current Accumulator Value(Binary): "<<bitset<16>(accumulator)<<endl;
         cout<<"Current Accumulator Value(Hex): "<<bitset<16>(accumulator)<<endl;
         accumulator=~accumulator;
         cout<<"New Accumulator Value(Binary): "<<bitset<16>(accumulator)<<endl;
         cout<<"New Accumulator Value(Hex): "<<hex<<accumulator<<endl;
     }

        //Accumulator Bytes
     else if(mode ==14){     //WACCL
         cout<<"Executing Write MBR to Low byte of Accumulator"<<endl;
         cout<<"Current Accumulator Value(Binary): "<<bitset<16>(accumulator)<<endl;
         cout<<"Current Accumulator Value(Hex): "<<hex<<accumulator<<endl;
         accumulator = MBR[mbr_Counter-1];
         cout<<"New Accumulator Value(binary): "<<bitset<16>(accumulator)<<endl;
         cout<<"New Accumulator Value(Hex):"<<hex<<accumulator<<endl;
     }
     else if(mode ==15){     //RACCL
         cout<<"Executing Read Low byte of Accumulator"<<endl;
         cout<<"Current Accumulator Value(Binary): "<<bitset<16>(accumulator)<<endl;
         cout<<"Current Accumulator Value(Hex): "<<hex<<accumulator<<endl;
         MBR[mbr_Counter] = accumulator;
         MBR[mbr_Counter] = MBR[mbr_Counter] <<15;
         cout<<"MBR: "<<bitset<8>(accumulator)<<endl;
         cout<<"New Accumulator Value(binary): "<<bitset<16>(accumulator)<<endl;
         cout<<"New Accumulator Value(Hex):"<<hex<<accumulator<<endl;
     }
     else if(mode ==16){     //WACCH
         cout<<"Executing Write MBR to High byte of Accumulator"<<endl;
         cout<<"Current Accumulator Value(Binary): "<<bitset<16>(accumulator)<<endl;
         cout<<"Current Accumulator Value(Hex): "<<hex<<accumulator<<endl;
         accumulator = MBR[mbr_Counter-1];
         accumulator = accumulator << 15;
         cout<<"New Accumulator Value(binary): "<<bitset<16>(accumulator)<<endl;
         cout<<"New Accumulator Value(Hex):"<<hex<<accumulator<<endl;
     }
     else if(mode ==17){     //RACCH
         cout<<"Executing Read High byte of Accumulator"<<endl;
         cout<<"Current Accumulator Value(Binary): "<<bitset<16>(accumulator)<<endl;
         cout<<"Current Accumulator Value(Hex): "<<hex<<accumulator<<endl;
         MBR[mbr_Counter] = accumulator;
         cout<<"MBR: "<<bitset<8>(accumulator)<<endl;
         cout<<"New Accumulator Value(binary): "<<bitset<16>(accumulator)<<endl;
         cout<<"New Accumulator Value(Hex):"<<hex<<accumulator<<endl;
     }
        //SHIFTING
     else if(mode ==18){     //SHL
         cout<<"Executing Shift Left"<<endl;
         cout<<"Current Accumulator Value(Binary): "<<bitset<16>(accumulator)<<endl;
         cout<<"Current Accumulator Value(Hex): "<<hex<<accumulator<<endl;
         accumulator = accumulator << 1;
         cout<<"New Accumulator Value(binary): "<<bitset<16>(accumulator)<<endl;
         cout<<"New Accumulator Value(Hex):"<<hex<<accumulator<<endl;
     }
     else if(mode ==19){     //SHR
         cout<<"Executing Shift Right"<<endl;
         cout<<"Current Accumulator Value(Binary): "<<bitset<16>(accumulator)<<endl;
         cout<<"Current Accumulator Value(Hex): "<<hex<<accumulator<<endl;
         accumulator = accumulator >> 1;
         cout<<"New Accumulator Value(binary): "<<bitset<16>(accumulator)<<endl;
         cout<<"New Accumulator Value(Hex):"<<hex<<accumulator<<endl;
     }
     return INST;
     //ALU
}

int registers ()
{
    int temp[16];


}

Control_Unit::~Control_Unit() {}