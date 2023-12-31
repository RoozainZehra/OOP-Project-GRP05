#include <iostream>
#include <vector>
#include <array>
using namespace std;
// #include "Farm.hpp"
#include "sdlManager.hpp"
#include "Storage.hpp"
#include "Vegetables.hpp"
#include "Carrot.hpp"
#include "Radish.hpp"
#include "Wheat.hpp"

class LandPatches{
    private:
    int locked_patches;
    int open_patches;
    static const int num_patches;
    static const int item_price;

    vector<SDL_Rect> AllPatches;

    //Land dimensions and position
    const int land_ht = 200;
    const int land_wdt = 200;
    const int land_x = 166;
    const int land_y = 413;

    //patches dimensions with positions
    SDL_Rect patch1 = {176,423,56,56};
    int patch1_y = 423;
    SDL_Rect patch2 = {236,423,56,56};
    int patch2_y = 423;
    SDL_Rect patch3 = {296,423,56,56};
    int patch3_y = 423;
    SDL_Rect patch4 = {176,483,56,56};
    int patch4_y = 483;
    SDL_Rect patch5 = {236,483,56,56};
    int patch5_y = 483;
    SDL_Rect patch6 = {296,483,56,56};
    int patch6_y = 483;
    SDL_Rect patch7 = {176,543,56,56};
    int patch7_y = 543;
    SDL_Rect patch8 = {236,543,56,56};
    int patch8_y = 543;
    SDL_Rect patch9 = {296,543,56,56};
    int patch9_y = 543;

    //flags to see if the patches are in use
    bool p1 = false;
    bool p2 = false;
    bool p3 = false;
    bool p4 = false;
    bool p5 = false;
    bool p6 = false;
    bool p7 = false;
    bool p8 = false;
    bool p9 = false;

    // Declare an array to hold plant statuses
    std::array<bool, 9> plantStatus;

    //Texture for Farm Land                                 
    SDL_Texture* landTexture = NULL;
    SDL_Texture* patchTexture = NULL;

    //to store vegies
    

    public:
    LandPatches();
    LandPatches(SDL_Renderer* gRenderer); //make default values 0
    ~LandPatches();
    void landRender(SDL_Renderer* gRenderer);
    void patchRender(SDL_Renderer* gRenderer);
    void createVeg(SDL_Renderer* gRenderer, std::array <Vegetables*, 9> &v, SDL_Rect rect, Storage* store);
    bool loadMedia();
    void getPatches(vector<SDL_Rect> &p);
    bool isPlanted(SDL_Rect rect);
    Vegetables* returnVeg(std::array <Vegetables*, 9> &v, SDL_Rect rect);
    void setEmpty(std::array <Vegetables*, 9> &v, SDL_Rect rect);
    void UnlockPatch();
    int itemPrice(char type);
};
