#include "MakaronTypes.h"

int main()
{
    FillMakaron *fill = new FillMakaron();
    CookieMakaron  *cookie  = new CookieMakaron();

    cookie->identify();
    cookie->perform_cookie();
    cookie->perform_filling();

    cout << endl;

    fill->identify();
    fill->perform_cookie();
    fill->perform_filling();

    return 0;
}
