#include <iostream>
#include "header.h"

int main() {
    Control_Unit ctrlUnit;

    int Program_Counter = 0;
    unsigned int toMemory = 0;
    string input;
    string Enable;
    array<unsigned int ,16> inputCode = {0,0,0,0,0,0,0,0,0,0,0,0};
    array<unsigned int ,16> dataSent = {0,0,0,0,0,0,0,0,0,0,0,0};

        start:
        cout << "Control Unit w/ Arithmetic Logic Unit" <<endl<<endl;

        cout<<"Accumulator: "<<bitset<16>(ctrlUnit.getAccumulator())<<"\t MBR: "<<bitset<8>(ctrlUnit.getMBR())<<endl;
        cout<<"Program Counter: "<<bitset<12>(Program_Counter)<<"\t MAR: "<<bitset<12>(ctrlUnit.getMAR())<<endl;
        cout<<"\t\t\t\t IO AR: "<<bitset<12>(ctrlUnit.getIO_AR())<<endl;
        cout<<"\t\t\t\t IO BR: "<<bitset<8>(ctrlUnit.getIO_BR())<<endl;
        cout<<endl;

        cout<<"\tMain Memory"<<endl;                              //Main Memory
        if(Program_Counter != 0 ){
            for(int count =0; count<Program_Counter+2;count++){
                if(inputCode[count] == 6){          //WB
                    cout<<"Address: "<<bitset<8>(count)<<"\tData: ";
                    cout<<hex<<inputCode[count]<<endl;
                    cout<<"Address: "<<bitset<8>(count+1)<<"\tData: ";
                    cout<<hex<<dataSent[count]<<endl;
                }
                else if(inputCode[count] == 1){     //WM
                    cout<<"Address: "<<bitset<8>(count)<<"\tData: ";
                    cout<<hex<<inputCode[count]<<endl;
                    cout<<"Address: "<<bitset<8>(count+1)<<"\tData: ";
                    cout<<hex<<dataSent[count]<<endl;
                }
                else if(inputCode[count] == 2){     //RM
                    cout<<"Address: "<<bitset<8>(count)<<"\tData: ";
                    cout<<hex<<inputCode[count]<<endl;
                    cout<<"Address: "<<bitset<8>(count+1)<<"\tData: ";
                    cout<<hex<<dataSent[count]<<endl;
                }
                else if(inputCode[count] == 3){     //BR
                    cout<<"Address: "<<bitset<8>(count)<<"\tData: ";
                    cout<<hex<<inputCode[count]<<endl;
                    cout<<"Address: "<<bitset<8>(count+1)<<"\tData: ";
                    cout<<hex<<dataSent[count]<<endl;
                }
                else if(inputCode[count] == 20){     //BRE
                    cout<<"Address: "<<bitset<8>(count)<<"\tData: ";
                    cout<<hex<<inputCode[count]<<endl;
                    cout<<"Address: "<<bitset<8>(count+1)<<"\tData: ";
                    cout<<hex<<dataSent[count]<<endl;
                }
                else if(inputCode[count] == 19){     //BRNE
                    cout<<"Address: "<<bitset<8>(count)<<"\tData: ";
                    cout<<hex<<inputCode[count]<<endl;
                    cout<<"Address: "<<bitset<8>(count+1)<<"\tData: ";
                    cout<<hex<<dataSent[count]<<endl;
                }
                else if(inputCode[count] == 18){     //BRGT
                    cout<<"Address: "<<bitset<8>(count)<<"\tData: ";
                    cout<<hex<<inputCode[count]<<endl;
                    cout<<"Address: "<<bitset<8>(count+1)<<"\tData: ";
                    cout<<hex<<dataSent[count]<<endl;
                }
                else if(inputCode[count] == 30){    //ADD
                    cout<<"Address: "<<bitset<8>(count)<<"\tData: ";
                    cout<<hex<<inputCode[count]<<endl;
                }
                else if(inputCode[count] == 29){    //SUB
                    cout<<"Address: "<<bitset<8>(count)<<"\tData: ";
                    cout<<hex<<inputCode[count]<<endl;
                }
                else if(inputCode[count] == 27){    //MUL
                    cout<<"Address: "<<bitset<8>(count)<<"\tData: ";
                    cout<<hex<<inputCode[count]<<endl;
                }
                else if(inputCode[count] == 28){    //DIV
                    cout<<"Address: "<<bitset<8>(count)<<"\tData: ";
                    cout<<hex<<inputCode[count]<<endl;
                }
                else if(inputCode[count] == 23){    //XOR
                    cout<<"Address: "<<bitset<8>(count)<<"\tData: ";
                    cout<<hex<<inputCode[count]<<endl;
                }
                else if(inputCode[count] == 8){     //WACCL
                    cout<<"Address: "<<bitset<8>(count)<<"\tData: ";
                    cout<<hex<<inputCode[count]<<endl;
                }
                else if(inputCode[count] == 10){     //RACCL
                    cout<<"Address: "<<bitset<8>(count)<<"\tData: ";
                    cout<<hex<<inputCode[count]<<endl;
                }
                else if(inputCode[count] == 9){     //WACCH
                    cout<<"Address: "<<bitset<8>(count)<<"\tData: ";
                    cout<<hex<<inputCode[count]<<endl;
                }
                else if(inputCode[count] == 11){     //WACCH
                    cout<<"Address: "<<bitset<8>(count)<<"\tData: ";
                    cout<<hex<<inputCode[count]<<endl;
                }
                else if(inputCode[count] == 22){     //SHL
                    cout<<"Address: "<<bitset<8>(count)<<"\tData: ";
                    cout<<hex<<inputCode[count]<<endl;
                }
                else if(inputCode[count] == 21){     //SHR
                    cout<<"Address: "<<bitset<8>(count)<<"\tData: ";
                    cout<<hex<<inputCode[count]<<endl;
                }
                else if(inputCode[count] == 26){     //AND
                    cout<<"Address: "<<bitset<8>(count)<<"\tData: ";
                    cout<<hex<<inputCode[count]<<endl;
                }
                else if(inputCode[count] == 25){     //OR
                    cout<<"Address: "<<bitset<8>(count)<<"\tData: ";
                    cout<<hex<<inputCode[count]<<endl;
                }
                else if(inputCode[count] == 24){     //NOT
                    cout<<"Address: "<<bitset<8>(count)<<"\tData: ";
                    cout<<hex<<inputCode[count]<<endl;
                }
                else{

                }
            }
        }
        cout<<endl;

        cout<<"\tIO Memory"<<endl;                              //IO Memory
        if(Program_Counter != 0 ){
            for(int count =0; count<Program_Counter+2;count++){
                if(inputCode[count] == 4){     //RIO
                    cout<<"Address: "<<bitset<8>(count)<<"\tData: ";
                    cout<<hex<<inputCode[count]<<endl;
                    cout<<"Address: "<<bitset<8>(count+1)<<"\tData: ";
                    cout<<hex<<dataSent[count]<<endl;
                }
                if(inputCode[count] == 5){     //RIO
                    cout<<"Address: "<<bitset<8>(count)<<"\tData: ";
                    cout<<hex<<inputCode[count]<<endl;
                    cout<<"Address: "<<bitset<8>(count+1)<<"\tData: ";
                    cout<<hex<<dataSent[count]<<endl;
                }
                else if(inputCode[count] == 7){     //WIB
                    cout<<"Address: "<<bitset<8>(count)<<"\tData: ";
                    cout<<hex<<inputCode[count]<<endl;
                    cout<<"Address: "<<bitset<8>(count+1)<<"\tData: ";
                    cout<<hex<<dataSent[count]<<endl;
                }
                else{

                }
            }
        }
        cout<<endl;

        cout<<"Input Commands:"<<endl;
        cout<<"WB: Write To Buffer\t\t\t\tADD: Addition"
              "\nWM: Write To Memory\t\t\t\tSUB: Subtraction"
              "\nRM: Read From Memory\t\t\t\tMUL: Multiplication"
              "\nBR: Branch\t\t\t\t\tDIV: Division"
              "\nWIB: Write To I/O Buffer\t\t\tAND: Perform Bitwise AND"
              "\nWIO: Write To I/O Memory\t\t\tOR: Perform Bitwise OR"
              "\nRIO: Read From I/O Memory\t\t\tNOT: Perform Bitwise NOT"
              "\nWACCL: Write MBR to low byte of Accumulator\tXOR: Exclusive OR"
              "\nWACCH: Write MBR to high byte of Accumulator"
              "\nRACCL: Read Low byte of Accumulator"
              "\nRACCH: Read High byte of Accumulator"
              "\nEOP: End Of Program"<<endl;

        cout<<endl<<endl;
        cout<<"Enter Input:";
        cin>>input;

            //MAIN MEMORY
        if(input == "WB" || input == "wb"){   //Write to Buffer

            cout<<"Writing to Main Memory..."<<endl;
            cout<<"Mode: Write to Buffer"<<endl;
            cout<<"Enter Value: ";
            cin>>hex>>toMemory;
            if(toMemory<0){
                cout<<"Memory Cannot Be Less Than 0"<<endl;
                system("pause");
                system("cls");
                goto start;
            }
            else if(toMemory>255){
                cout <<"Memory Overload"<<endl;
                system("pause");
                system("cls");
                goto start;
            }
            else{
                inputCode[Program_Counter] = 3;
                dataSent[Program_Counter] = toMemory;
                cout<<Program_Counter;
                cout<<dataSent[Program_Counter];
                ctrlUnit.CU(toMemory,6);
                system("pause");
                system("cls");
                Program_Counter+=2;
            }
        }
        else if(input == "WM" || input == "wm" ){   //Write to Memory
            cout<<"Writing to Main Memory..."<<endl;
            cout<<"Mode: Write to Memory"<<endl;
            cout<<"Enter Value: ";
            cin>>hex>>toMemory;

            if(toMemory>2047){
                cout<<"Memory Overload"<<endl;
            }
            else if(toMemory<0){
                cout<<"Memory Cannot Be Less Than 0"<<endl;
            }
            else{
                inputCode[Program_Counter] = 1;
                dataSent[Program_Counter] = toMemory;
                ctrlUnit.CU(toMemory,1);
                Program_Counter+=2;
            }
            system("pause");
            system("cls");
        }
        else if(input == "RM" || input == "rm" ){  //Read from Memory
            cout<<"Writing to Main Memory..."<<endl;
            cout<<"Mode:Read from Memory"<<endl;
            cout<<"Enter Value: ";
            cin>>hex>>toMemory;

            if(toMemory>2047){
                cout<<"Memory Overload"<<endl;
            }
            else if(toMemory<0){
                cout<<"Memory Cannot Be Less Than 0"<<endl;
            }
            else{
                inputCode[Program_Counter] = 2;
                dataSent[Program_Counter] = toMemory;
                ctrlUnit.CU(toMemory,2);

                Program_Counter+=2;
            }
            system("pause");
            system("cls");
        }
        else if(input == "BR" || input == "br"){      //Branch
            cout<<"Writing to Main Memory..."<<endl;

            cout<<"Mode:Branch"<<endl;
            cout<<"Enter Value: ";
            cin>>hex>>toMemory;
            if(toMemory<0){
                cout<<"Memory Cannot Be Less Than 0"<<endl;
            }
            else{
                inputCode[Program_Counter] = 3;
                dataSent[Program_Counter] = toMemory;

                ctrlUnit.CU(toMemory,3);

                Program_Counter+=2;
            }
            system("pause");
            system("cls");
        }
        else if(input == "BRE" || input=="bre"){        //Branch Equal
            cout<<"Writing to Main Memory..."<<endl;

            cout<<"Mode:Branch Equal"<<endl;
            cout<<"Enter Value: ";
            cin>>hex>>toMemory;
            if(toMemory<0){
                cout<<"Memory Cannot Be Less Than 0"<<endl;
            }
            else if(ctrlUnit.getMBR() == ctrlUnit.getAccumulator()){
                inputCode[Program_Counter] = 20;
                dataSent[Program_Counter] = toMemory;

                int getReturn=ctrlUnit.CU(toMemory,24);
                if(getReturn == 1){
                    Program_Counter=toMemory;
                }
            }
            else{
                cout<<"Bus And Accumulator is Not Equal"<<endl;
            }
            system("pause");
            system("cls");
        }
        else if(input == "BRNE" || input == "brne"){            //Branch Not Equal
            cout<<"Writing to Main Memory..."<<endl;

            cout<<"Mode:Branch Not Equal"<<endl;
            cout<<"Enter Value: ";
            cin>>hex>>toMemory;
            if(toMemory<0){
                cout<<"Memory Cannot Be Less Than 0"<<endl;
            }
            else if(ctrlUnit.getMBR() != ctrlUnit.getAccumulator()){
                inputCode[Program_Counter] = 19;
                dataSent[Program_Counter] = toMemory;

                int getReturn=ctrlUnit.CU(toMemory,25);
                if(getReturn == 1){
                    Program_Counter=toMemory;
                }
            }
            else{
                cout<<"Bus And Accumulator is Equal"<<endl;
            }
            system("pause");
            system("cls");
        }
        else if(input == "BRGT" || input == "brgt"){        //Branch Greater Than
            cout<<"Writing to Main Memory..."<<endl;

            cout<<"Mode:Branch Greater Than Accumulator"<<endl;
            cout<<"Enter Value: ";
            cin>>hex>>toMemory;
            if(toMemory<0){
                cout<<"Memory Cannot Be Less Than 0"<<endl;
            }
            else if(ctrlUnit.getMBR() < ctrlUnit.getAccumulator()){
                inputCode[Program_Counter] = 18;
                dataSent[Program_Counter] = toMemory;

                int getReturn=ctrlUnit.CU(toMemory,26);
                if(getReturn == 1){
                    Program_Counter=toMemory;
                }
            }
            else{
                cout<<"Bus is Greater Than Accumulator"<<endl;
            }
            system("pause");
            system("cls");
        }
        else if(input == "BRLT" || input == "brlt"){        //Branch Greater Than
            cout<<"Writing to Main Memory..."<<endl;

            cout<<"Mode:Branch Lesser Than Accumulator"<<endl;
            cout<<"Enter Value: ";
            cin>>hex>>toMemory;
            if(toMemory<0){
                cout<<"Memory Cannot Be Less Than 0"<<endl;
            }
            else if(ctrlUnit.getMBR() > ctrlUnit.getAccumulator()){
                inputCode[Program_Counter] = 17;
                dataSent[Program_Counter] = toMemory;

                int getReturn=ctrlUnit.CU(toMemory,27);
                if(getReturn == 1){
                    Program_Counter=toMemory;
                }
            }
            else{
                cout<<"Bus is Lesser Than Accumulator"<<endl;
            }
            system("pause");
            system("cls");
        }
            //IO MEMORY
        else if(input == "RIO" || input == "rio"){      //Read to IO
            cout<<"Writing to IO Memory..."<<endl;

            cout<<"Mode:Read from IO"<<endl;
            cout<<"Enter Value: ";
            cin>>hex>>toMemory;
            if(toMemory<0){
                cout<<"Memory Cannot Be Less Than 0"<<endl;
            }
            else{
                inputCode[Program_Counter] = 4;
                dataSent[Program_Counter] = toMemory;

                ctrlUnit.CU(toMemory,4);

                Program_Counter+=2;
            }
            system("pause");
            system("cls");
        }
        else if(input == "WIO" || input == "wio"){      //Write to IO
            cout<<"Writing to IO Memory..."<<endl;
            cout<<"Mode:Write to IO"<<endl;
            cout<<"Enter Value: ";
            cin>>hex>>toMemory;

            if(toMemory<2047){
                dataSent[Program_Counter] = toMemory;
                inputCode[Program_Counter] = 5;
                ctrlUnit.CU(toMemory,5);
                Program_Counter+=2;
            }
            else  if(toMemory<0){
                cout<<"Memory Cannot Be Less Than 0"<<endl;
            }
            else{
                cout<<"Memory Overload"<<endl;
            }
            system("pause");
            system("cls");
        }
        else if(input == "WIB" || input == "wib"){      //Write to IO Buffer
            cout<<"Writing to IO Memory..."<<endl;
            cout<<"Mode: Write to IO Buffer"<<endl;
            cout<<"Enter Value: ";
            cin>>hex>>toMemory;

            if(toMemory <2047 && toMemory>0){
                inputCode[Program_Counter] = 7;
                dataSent[Program_Counter] = toMemory;
                ctrlUnit.CU(toMemory,7);
                Program_Counter+=2;
            }
            else  if(toMemory<0){
                cout<<"Memory Cannot Be Less Than 0"<<endl;
            }
            else{
                cout<<"Memory Overload"<<endl;
            }
            system("pause");
            system("cls");
        }
        else if(input == "WACCL" || input == "waccl"){      //Write MBR to low byte of ACC
            cout<<"Writing to Low byte of Accumulator..."<<endl;
            cout<<"Mode: Write MBR to low byte of Accumulator";
            ctrlUnit.CU(0,14);
            inputCode[Program_Counter] = 8;
            Program_Counter+=2;
            system("pause");
            system("cls");
        }
        else if(input == "RACCL" || input == "raccl"){      //Read low byte of ACC, store to MBR
            cout<<"Reading to Low byte of Accumulator..."<<endl;
            cout<<"Mode: Read Low byte of Accumulator";
            ctrlUnit.CU(0,15);
            inputCode[Program_Counter] = 10;
            Program_Counter+=2;
            system("pause");
            system("cls");
        }
        else if(input == "WACCH" || input == "wacch"){      //Write MBR to high byte of ACC
            cout<<"Writing to High byte of Accumulator..."<<endl;
            cout<<"Mode: Write MBR to High byte of Accumulator";
            ctrlUnit.CU(0,16);
            inputCode[Program_Counter] = 9;
            Program_Counter+=2;
            system("pause");
            system("cls");
        }
        else if(input == "RACCH" || input == "racch"){      //Read high byte of ACC, store to MBR
            cout<<"Reading to High byte of Accumulator..."<<endl;
            cout<<"Mode: Read High byte of Accumulator";
            ctrlUnit.CU(0,17);
            inputCode[Program_Counter] = 11;
            Program_Counter+=2;
            system("pause");
            system("cls");
        }
            //ALU       alu has different modes
        else if(input == "ADD" || input == "add"){          //Addition
            cout<<"Addition Operation..."<<endl;
            cout<<"Mode: Addition"<<endl;
            inputCode[Program_Counter] = 30;
            ctrlUnit.CU(0,10);
            Program_Counter+=2;
            system("pause");
            system("cls");

        }
        else if(input == "SUB" || input == "sub"){          //Subtraction
            cout<<"Subtraction Operation..."<<endl;
            cout<<"Mode: Subtraction"<<endl;
            ctrlUnit.CU(0,11);
            inputCode[Program_Counter] = 29;
            Program_Counter+=2;
            system("pause");
            system("cls");
        }
        else if(input == "MUL" || input == "mul"){          //Multiplication
            cout<<"Multiplication Operation..."<<endl;
            cout<<"Mode: Multiplication"<<endl;
            ctrlUnit.CU(0,12);
            inputCode[Program_Counter] = 27;
            Program_Counter+=2;
            system("pause");
            system("cls");
        }
        else if(input == "DIV" || input == "div"){          //Division
            cout<<"Divide Operation..."<<endl;
            cout<<"Mode: Division"<<endl;
            ctrlUnit.CU(0,13);
            inputCode[Program_Counter] = 28;
            Program_Counter+=2;
            system("pause");
            system("cls");
        }
        else if (input == "AND" || input == "and"){         //AND
            cout << "AND Operation"<<endl;
            cout << "Mode: AND"<<endl;
            ctrlUnit.CU(0,21);
            inputCode[Program_Counter] = 26;
            Program_Counter+=2;
            system("pause");
            system("cls");
        }
        else if (input == "OR" || input == "or")            //OR
        {
            cout << "OR Operation"<<endl;
            cout <<"Mode: OR"<<endl;
            ctrlUnit.CU(0,22);
            inputCode[Program_Counter] = 25;
            Program_Counter+=2;
            system("pause");
            system("cls");
        }
        else if (input == "NOT" || input == "not")          //NOT
        {
            cout << "NOT Operation"<<endl;
            cout <<"Mode: NOT"<<endl;
            ctrlUnit.CU(0,23);
            inputCode[Program_Counter] = 24;
            Program_Counter+=2;
            system("pause");
            system("cls");
        }
        else if(input == "XOR" || input == "xor"){          //XOR
            cout<<"Exclusive OR Operation..."<<endl;
            cout<<"Mode: XOR"<<endl;
            ctrlUnit.CU(0,20);
            inputCode[Program_Counter] = 23;
            Program_Counter+=2;
            system("pause");
            system("cls");
        }
        else if(input == "SHL" || input == "shl"){          //Shift Left
            cout<<"Shifting Accumulator To The Left"<<endl;
            cout<<"Mode: Shift Left"<<endl;
            ctrlUnit.CU(0,18);
            inputCode[Program_Counter] = 22;
            Program_Counter+=2;
            system("pause");
            system("cls");
        }
        else if(input == "SHR" || input == "shr"){          //Shift Right
            cout<<"Shifting Accumulator To The Right"<<endl;
            cout<<"Mode: Shift Right"<<endl;
            ctrlUnit.CU(0,19);
            inputCode[Program_Counter] = 21;
            Program_Counter+=2;
            system("pause");
            system("cls");
        }
        else if(input == "EOP" || input == "eop"){          //End of Program

            cout<<"Goodbye"<<endl;
            system("pause");
            system("cls");

            return 0;
        }
        else{
            cout<<"Invalid Input"<<endl;
            system("pause");
            system("CLS");
            goto start;
        }
        goto start;
}