#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<string> polyhedrons(n);

    vector<int> faces = {4, 6, 8, 12, 20};
    int totfaces = 0;

    for(int i = 0; i < n; i++) {
        cin>>polyhedrons[i];
        if(polyhedrons[i] == "Tetrahedron") {
            totfaces += faces[0];
        } else if(polyhedrons[i] == "Cube") {
            totfaces += faces[1];
        } else if(polyhedrons[i] == "Octahedron") {
            totfaces += faces[2];
        } else if(polyhedrons[i] == "Dodecahedron") {
            totfaces += faces[3];
        } else if(polyhedrons[i] == "Icosahedron") {
            totfaces += faces[4];
        }
    }
    cout<<totfaces<<endl;
    return 0;
}