//
// Created by tassiio on 24.10.2021.
//

#include "Class_Slice.h"


Class_Slice::Class_Slice(int Length_of_slice) {
    S_Slice_Length = Length_of_slice;
    S_Array = new int[S_Slice_Length];
    S_Slice_Current_Item = 0;
    S_Start_Index = 0;
    S_Stop_Index = 0;
    S_Step = 1;
}

void Class_Slice::S_Push(int item) {
    assert(S_Slice_Current_Item < S_Slice_Length);
    S_Array[S_Slice_Current_Item] =  item;
    S_Slice_Current_Item++;
    //std::cout << L_current_item << std::endl;

//    for( int p = 0; p < S_Slice_Length; p++)
//        std::cout << S_Array[p] << std::endl;
}

void Class_Slice::S_Parse(std::string Intervals) {

    std::string S_String = std::move(Intervals);
    unsigned int Length_of_S_String = S_String.length();

    S_Start_Index = 0;
    S_Stop_Index = S_Slice_Length-1;
    S_Step = 1;

    const char Delimeter = ':';

    if(std::count(S_String.begin(), S_String.end(), Delimeter) == 2) {

        std::string S_String_Start_Index;
        std::string S_String_Stop_Index;
        std::string S_String_Step;
        int i = 0;// EOF_Start_Index, EOF_Stop_Index;

        while(S_String[i] != ':') {
            S_String_Start_Index += S_String[i];
            i++;
        }

        //EOF_Start_Index = i;
        i++;

        while (S_String[i] != ':') {
            S_String_Stop_Index += S_String[i];
            i++;
        }
        //EOF_Stop_Index = i;
        i++;

        while (i < S_String.length()) {
            S_String_Step += S_String[i];
            i++;
        }


        if (!S_String_Start_Index.empty()) {
            S_Start_Index = std::stoi(S_String_Start_Index);
        }
        if (!S_String_Stop_Index.empty()) {
            S_Stop_Index = std::stoi(S_String_Stop_Index);
        }
        if (!S_String_Step.empty()) {
            S_Step = std::stoi(S_String_Step);
        }
//        std::cout << "Type_of_Start: " << typeid(S_Start_Index).name() << std::endl;
//        std::cout << "Type of Stop: " << typeid(S_Stop_Index).name() << std::endl;
//        std::cout << "Type of Step: " << typeid(S_Step).name() << std::endl;

        if(S_Stop_Index != S_Slice_Length-1) {
            unsigned int New_Length = (S_Stop_Index-1-S_Start_Index)/S_Step + 1;
            int *New_Array = new int[New_Length];

            for(int t = 0; t < New_Length; t++) {
                New_Array[t] = S_Array[S_Start_Index + S_Step*t];
            }

            std::cout << "Slice: " << std::endl;
            for(int t = 0; t < New_Length; t++) {
                std::cout << New_Array[t] << " ";
            }
            std::cout << std::endl;

            delete []New_Array;
        }
        else {
            unsigned int New_Length = (S_Stop_Index-S_Start_Index)/S_Step + 1;
            int *New_Array = new int[New_Length];

            for(int t = 0; t < New_Length; t++) {
                New_Array[t] = S_Array[S_Start_Index + S_Step*t];
            }

            std::cout << "Slice: " << std::endl;
            for(int t = 0; t < New_Length; t++) {
                std::cout << New_Array[t] << " ";
            }
            std::cout << std::endl;

            delete []New_Array;
        }

    }

    if(std::count(S_String.begin(), S_String.end(), Delimeter) == 1) {

        std::string S_String_Step_c;
        int i = 0;
        //std::cout << "Type before " << typeid(S_String_Step_c).name() << std::endl;
        while(i < Length_of_S_String) {
            if (S_String[i] == Delimeter) {
                i++;
            }
            else {
                S_String_Step_c += S_String[i];
                i++;
            }
        }
        //std::cout << "Type " << typeid(S_String_Step_c).name() << std::endl;
        if (!S_String_Step_c.empty()) {
            S_Step = std::stoi(S_String_Step_c);
        }
//        std::cout << typeid(S_Step).name() << std::endl;
//        std::cout << S_Step << std::endl;
//        std::cout << S_Start_Index << std::endl;
//        std::cout << S_Stop_Index << std::endl;

        unsigned int New_Length = (S_Stop_Index-S_Start_Index)/S_Step + 1;
        int *New_Array = new int[New_Length];

        for(int t = 0; t < New_Length; t++) {
            New_Array[t] = S_Array[S_Start_Index + S_Step*t];
        }

        std::cout << "Slice: " << std::endl;
        for(int t = 0; t < New_Length; t++) {
            std::cout << New_Array[t] << " ";
        }
        std::cout << std::endl;

        delete []New_Array;
    }


}
Class_Slice::~Class_Slice() {

    delete []S_Array;

}