#define UNIT_TEST
#include "../map.cpp"

#include <cassert>

int main()
{
    MapTileProxy tile(10, 20, 30, 40);

    assert(tile.CenterX() == 10);
    assert(tile.CenterY() == 20);
    assert(tile.Width() == 30);
    assert(tile.Height() == 40);

    tile.Draw();

    return 0;
}
