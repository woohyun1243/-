#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Person {
    int age;
    string name;
    int order;
};

bool cmp(const Person& a, const Person& b) {
    if (a.age == b.age)
        return a.order < b.order;
    return a.age < b.age;
}

int main() {
    int N;
    cin >> N;

    vector<Person> v(N);

    for (int i = 0; i < N; i++) {
        cin >> v[i].age >> v[i].name;
        v[i].order = i;
    }

    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < N; i++) {
        cout << v[i].age << " " << v[i].name << "\n";
    }

    return 0;
}