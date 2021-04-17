#include <iostream>
#include <gsl/gsl_sf_coupling.h>

int main()
{
    using namespace std;

    int two_ja = 1, two_ma = 1;
    int two_jb = 1, two_mb = -1;
    int two_jc = 0, two_mc = 0;

    // should be 1/sqrt(2) = 0.707107...
    double ret = gsl_sf_coupling_3j(two_ja, two_jb, two_jc, two_ma, two_mb, two_mc);
    if (abs(ret - 1. / sqrt(2)) > 1e-14)
        cout << "failed!" << endl;
    cout << "ret = " << ret << endl;
    getchar();
}
