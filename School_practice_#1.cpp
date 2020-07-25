#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define kaj_start int main()
#define kaj_shesh return 0

class myClass {
public:
  myClass() {
    cout <<"Hey";
  }
  void setName(string x) {
    name = x;
  }
  string getName() {
    return name;
  }
private:
  string name;
};



kaj_start{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    myClass obj;
    obj.setName("Samrat");
    obj.getName();

    kaj_shesh;
}
