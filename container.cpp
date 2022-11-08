#include <iostream>
using namespace std;



// // function declarations
void getBlockSpecs(float *block, int BLOCK_COUNT);
float calculateBlocks(float *block, int BLOCK_COUNT, int CONT_MAX_KG);
void displayBlockSpecs(float *block, int BLOCK_COUNT);


int main()
{
    // constants & variables
    int BLOCK_COUNT = 0;
    const int CONT_MAX_LENGTH = 570; //cm
    const int CONT_MAX_WIDTH = 220; //cm
    const int CONT_MAX_HEIGHT = 230; //cm
    const int CONT_MAX_KG = 27500; //kg
    const string PROMPT_HM_BLOCKS = "kac tane blok yukliceniz?";
    float block[BLOCK_COUNT];

    // input for block count
    cout << PROMPT_HM_BLOCKS << endl;
    cin >> BLOCK_COUNT;

    // get input for block specs
    getBlockSpecs(block, BLOCK_COUNT);

    // display block specs
    displayBlockSpecs(block, BLOCK_COUNT);


    return 0;
}

void getBlockSpecs(float *block, int BLOCK_COUNT)
{
	for (int count = 0; count < BLOCK_COUNT; count++)
	{
		cout << (count + 1) << " numarali blok icin kg degeri giriniz: " << endl;
		cin >> block[count];
	}
}

void displayBlockSpecs(float *block, int BLOCK_COUNT)
{
	for (int count = 0; count < BLOCK_COUNT; count++)
	{
		cout << (count+1) << " numarali blok + " << (count+2) << " numarali blok = " << (block[count+1] + block[count+2]) << endl;
	}
}

float calculateBlocks(float *block, int BLOCK_COUNT, int CONT_MAX_KG)
{
    for (int count = 0; count < BLOCK_COUNT; count++)
    {
    }
}
