
#include <iostream>
//#include <stdlib.h>

using namespace std;

bool place_queen() {
    int position[8];
    int col = 1;
    while (col<=8) {
        bool is_placed = false;
        //cout << "\n\nCurrent col " << col << endl;
        for(int row=1; row<=8; row++) {
            if (is_placed == true) {
                break;
            }
            if (col==1) {
                row = 1;
                is_placed = true;
                position[col-1] = row;
                col++;
                break;

            }
            else if ((col>1) && (col<=8)) {
                for (int i=1; i<=col-1; i++){
                    //cout << "begin: row " << row << endl;
                    //cout << "col: " << col << endl;
                    //cout << "i: " << i << endl;
                    if (position[i-1] == row) {
                        //cout << "same row"<< endl;
                        if (row==8) {
                            //cout << "exiting";
                            is_placed = false;
                            //recursion starts
                            while (is_placed==false){
                                col--;
                                int x = position[col-1]+1;
                                //cout << x << endl;
                                for (x; x<=8; x++) {
                                    //cout << "going in loooops" << endl;
                                    if (is_placed == true) {
                                        break;
                                    }
                                    for (int j=1; j<=col-1; j++){
                                        //cout << "value for j: " << j << endl;
                                        //cout << "row :" << x << endl;
                                        if (position[j-1] == x) {
                                            //cout << "same row x2" << endl;
                                            if (x==8) {
                                                //cout << "NOPE BACKTRACK AGAIN" << endl;
                                                break;
                                            }
                                        break;
                                        } else if (position[j-1]+(col-j)==x ) {  //checking diagonals
                                            //cout << "lower diag x2" << endl;
                                            if (x==8) {
                                                //cout << "NOPE" << endl;
                                                break;
                                            }
                                        break;
                                        } else if (position[j-1]-(col-j)==x ) {  //checking diagonals
                                            //cout << "upper diag x2" << endl;
                                            if (x==8) {
                                                //cout << "NOPE" << endl;
                                                break;
                                            }
                                        break;
                                        } else if (j==col-1) {
                                            is_placed = true;
                                            //cout << "yay!" << endl;
                                            position[col-1] = x;
                                            //cout << x << endl;
                                            //cout << col << " is current column" << endl;
                                            col++;
                                            break;
                                        }
                                    //exit(0);
                                    }
                                }
                            } // end while -- recursion ends
                        }
                        break;
                    }else if (position[i-1]+(col-i)==row ) {  //checking diagonals
                        //cout << "lower diag" << endl;
                        if (row==8) {
                            cout << "exiting";
                            is_placed = false;
                            //recursion starts
                            while (is_placed==false){
                                col--;
                                int x = position[col-1]+1;
                                //cout << x << endl;
                                for (x; x<=8; x++) {
                                    //cout << "going in loooops" << endl;
                                    if (is_placed == true) {
                                        break;
                                    }
                                    for (int j=1; j<=col-1; j++){
                                        //cout << "value for j: " << j << endl;
                                        //cout << "row :" << x << endl;
                                        if (position[j-1] == x) {
                                            //cout << "same row x2" << endl;
                                            if (x==8) {
                                                //cout << "NOPE BACKTRACK AGAIN" << endl;
                                                break;
                                            }
                                        break;
                                        } else if (position[j-1]+(col-j)==x ) {  //checking diagonals
                                            //cout << "lower diag x2" << endl;
                                            if (x==8) {
                                                //cout << "NOPE" << endl;
                                                break;
                                            }
                                        break;
                                        } else if (position[j-1]-(col-j)==x ) {  //checking diagonals
                                            //cout << "upper diag x2" << endl;
                                            if (x==8) {
                                                //cout << "NOPE" << endl;
                                                break;
                                            }
                                        break;
                                        } else if (j==col-1) {
                                            is_placed = true;
                                            //cout << "yay!" << endl;
                                            position[col-1] = x;
                                            //cout << x << endl;
                                            //cout << col << " is current column" << endl;
                                            col++;
                                            break;
                                        }
                                    //exit(0);
                                    }
                                }
                            } // end while -- recursion ends
                        }
                    break;
                    }else if (position[i-1]-(col-i)==row) {
                        //cout << "upper diag" << endl;
                        if (row==8) {
                            //cout << "exiting";
                            is_placed = false;
                            //recursion starts
                            while (is_placed==false){
                                col--;
                                int x = position[col-1]+1;
                                cout << x << endl;
                                for (x; x<=8; x++) {
                                    //cout << "going in loooops" << endl;
                                    if (is_placed == true) {
                                        break;
                                    }
                                    for (int j=1; j<=col-1; j++){
                                        //cout << "value for j: " << j << endl;
                                        //cout << "row :" << x << endl;
                                        if (position[j-1] == x) {
                                            //cout << "same row x2" << endl;
                                            if (x==8) {
                                                //cout << "NOPE BACKTRACK AGAIN" << endl;
                                                break;
                                            }
                                        break;
                                        } else if (position[j-1]+(col-j)==x ) {  //checking diagonals
                                            //cout << "lower diag x2" << endl;
                                            if (x==8) {
                                                //cout << "NOPE" << endl;
                                                break;
                                            }
                                        break;
                                        } else if (position[j-1]-(col-j)==x ) {  //checking diagonals
                                            //cout << "upper diag x2" << endl;
                                            if (x==8) {
                                                //cout << "NOPE" << endl;
                                                break;
                                            }
                                        break;
                                        } else if (j==col-1) {
                                            is_placed = true;
                                            //cout << "yay!" << endl;
                                            position[col-1] = x;
                                            //cout << x << endl;
                                            //cout << col << " is current column" << endl;
                                            col++;
                                            break;
                                        }
                                    //exit(0);
                                    }
                                }
                            } // end while -- recursion ends
                        }
                    break;
                    }else if (i == col-1){
                        is_placed = true;
                        //cout << "good" << endl;
                        position[col-1] = row;
                        //cout << position[col-1] << ": this is position of this column" << endl;
                        col++;
                        break;
                    }
                } // end column for loop
            }
        } //end row for loop
    }
    for (int i=0; i<8; i++) {
        if (i!=7) {
            cout << position[i] << ",";
        }else {
            cout << position[i];
        }
    }
}

int main() {
    place_queen();
    return 0;
}
