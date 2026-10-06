#include <cstdio>
void Normalizacion (float v[], int n) {
    int i;
    float min, max, amp;
    min = v[0];
    max = v[0];
    for (i=1; i<n; i++)
        if (v[i]<min) min = v[i];
        else if (v[i]>max) max = v[i];
    amp = max-min;
    for (i=0; i<n; i++)
        v[i] = (v[i] - min) / amp;
}
int main() {
    int i;
    float v[6] = {11, 3, 7, 12, 16, 7};
    Normalizacion(v, 6);
    for (i=0; i<6; i++)
        printf ("%.3f ", v[i]);
    return 0;
}