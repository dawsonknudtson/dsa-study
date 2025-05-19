// Space Complexity - recursive function 

// o(n) time and space complexity
int sum(int n) {
    if (n <= 0) {
        return 0;
    }
    return n + sum(n-1);
}

// o(n) calls ot pairsum. Calls do not exist on stack so only a o(1) space

int pairsumsequence(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pairsum(i, i+1);
    }
    return sum;
}

int pairsum(int a, int b) {
    return a + b;
}

