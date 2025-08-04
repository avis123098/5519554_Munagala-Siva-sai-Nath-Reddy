#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive_count++;
        } else if (arr[i] < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }

    float positive_ratio = static_cast<float>(positive_count) / n;
    float negative_ratio = static_cast<float>(negative_count) / n;
    float zero_ratio = static_cast<float>(zero_count) / n;

    cout << fixed << setprecision(6) << positive_ratio << endl;
    cout << fixed << setprecision(6) << negative_ratio << endl;
    cout << fixed << setprecision(6) << zero_ratio << endl;

    return 0;
}
