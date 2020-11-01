 #include <iostream>
 using namespace std;

 int main() 
{
   // Multi Dimensional Array
   int funArray[4][3] = {{9,5,6},{1,2,8},{2,5,7},{4,3,0}}; // Actually 4 different arrays
   // [row][column]         1       2       3       4   each with 3 elements
   
   /*{9,5,6}
     {1,2,8}      Representation of the MD Array
     {2,5,7}
     {4,3,0}*/

    // To print a MD Array
        // looping through rows
    for(int row =0; row<4; row++){
        // looping through columns
        for(int col=0; col<3;col++)
        {
            cout<<funArray[row][col] <<" ";
        }
        cout<<endl;
    }


}

