/*
    * Autor: Juan David Bernal Maldonado.
    * Tarea 1 Programacion Orientada a Objetos
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

/* ======================================= Punto 1 ======================================= */

int main(){
    int ans = 0, num;
    for(int i = 0; i < 3; i++){
        cin >> num;
        ans += num;
    }
    cout << ans;
    return 0;
}

/* ======================================= Punto 2 ======================================= */

int main(){
    int n;
    cin >> n;
    if(n == 1)
        cout << "one" << endl;
    else if(n == 2)
        cout << "two" << endl;
    else if(n == 3)
        cout << "three" << endl;
    else if(n == 4)
        cout << "four" << endl;
    else if(n == 5)
        cout << "five" << endl;
    else if(n == 6)
        cout << "six" << endl;
    else if(n == 7)
        cout << "seven" << endl;
    else if(n == 8)
        cout << "eight" << endl;
    else if(n == 9)
        cout << "nine" << endl;
    else if(n > 9)
        cout << "Greater than 9" << endl;
    return 0;
}

/* ======================================= Punto 3 ======================================= */

string isNumberr(int n){
    string ans;
    if(n == 1)
        ans = "one";
    else if(n == 2)
        ans = "two";
    else if(n == 3)
        ans = "three";
    else if(n == 4)
        ans = "four";
    else if(n == 5)
        ans = "five";
    else if(n == 6)
        ans = "six";
    else if(n == 7)
        ans = "seven";
    else if(n == 8)
        ans = "eight";
    else if(n == 9)
        ans = "nine";
    return ans;
}

int main(){
    int n, m;
    cin >> n;
    cin >> m;
    for(int i = n; i <= m; i++){
        if(i <= 9)
            cout << isNumberr(i) << endl;
        else{
            if(i % 2 == 0)
                cout << "even" << endl;
            else
                cout << "odd" << endl;
        }
    }
    return 0;
}

/* ======================================= Punto 4 ======================================= */

int max_of_four(int a, int b, int c, int d){
    int max;
    max = a;
    if(b > max) 
        max = b;
    if(c > max)
        max = c;
    if(d > max)
        max = d;
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}

/* ======================================= Punto 5 ======================================= */

int main(){
    int N, n;
    cin >> N;
    int arr[N];
    for(int i = N; i > 0; i--){
        cin >> n;
        arr[i - 1] = n;
    }
    for(int i = 0; i < N; i++){
        if(i == N - 1)
            cout << arr[i];
        else
            cout << arr[i] << " ";
    }
    return 0;
}

/* ======================================= Punto 6 ======================================= */

int main(){
    string a, b, c;
    cin >> a;
    cin >> b;
    cout << a.size() << " ";
    cout << b.size() << endl;
    c = a + b;
    cout << c << endl;
    char a1 = b[0], b1 = a[0];
    a[0] = a1;
    b[0] = b1;
    cout << a << " ";
    cout << b << endl;
    return 0;
}

/* ======================================= Punto 7 ======================================= */

class Student{
    private:    
        int age, standard;
        string name;
        string lastName;
    public:
        void set_age(int n){
            this->age = n;
        }
        void set_standard(int n){
            this->standard = n;
        }
        void set_first_name(string s){
            this->name = s;
        }
        void set_last_name(string s){
            this->lastName = s;
        }
        int get_age(){
            return this->age;
        }
        string get_last_name(){
            return this->lastName;
        }
        string get_first_name(){
            return this->name;
        }
        int get_standard(){
            return this->standard;
        }
        string to_string(){
            return std::to_string(age) + "," + name + "," + lastName + "," + std::to_string(standard);
        }
    };

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}

/* ======================================= Punto 8 ======================================= */

class Student{
    private:
        vector<int> scores;
    public:
        void input(){
            for(int i = 0; i < 5; i++){
                int score;
                cin >> score;
                scores.push_back(score);
            }  
        }
        int calculateTotalScore(){
            int ans = 0;
            for(int i = 0; i < scores.size(); i++){
                ans += scores[i];
            }
            return ans;
        }
};

int main(){
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}