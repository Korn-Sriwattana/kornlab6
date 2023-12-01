#include <iostream>
#include <____________>

using namespace std;

___________ deg2rad(___________ x){
    ___________ M_PI*x/180.0;
}

___________ rad2deg(___________){
    return ___________
}

___________ findXComponent(___________ l1, ___________ l2, ___________ a1, ___________ a2){
    return ___________*cos(___________)+___________*cos(___________)
}

___________ findYComponent(___________){
    ___________
}

__________________________{ //pythagoras function
    __________________________
}

___________ ___________(___________){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = " _____________
    cout << _________________________________________________ 
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}#include <iostream>
#include <____________>

using namespace std;

___________ deg2rad(___________ x){
    ___________ M_PI*x/180.0;
}

___________ rad2deg(___________){
    return ___________
}

___________ findXComponent(___________ l1, ___________ l2, ___________ a1, ___________ a2){
    return ___________*cos(___________)+___________*cos(___________)
}

___________ findYComponent(___________){
    ___________
}

__________________________{ //pythagoras function
    __________________________
}

___________ ___________(___________){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = " _____________
    cout << _________________________________________________ 
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}