int Minimo(int v[], int Tam)[cite: 5]
{
    int i, Min;[cite: 5]

    Min = v[0];[cite: 5]
    for (i = 0; i < Tam; i++)[cite: 5]
        if (v[i] < Min)[cite: 5]
            Min = v[i];[cite: 5]

    return Min;[cite: 5]
}