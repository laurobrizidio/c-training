#include <stdio.h>
#include <stdlib.h>

struct pixel{
    unsigned int r,g,b;
};

struct header_img{
    unsigned int width, height;
};

struct img {
    struct header_img header;

    struct pixel** pixel_arr;

};

int main(){
    struct img* img1 = malloc(sizeof(struct img));
    img1->header.height = 20;
    img1->header.width = 20;
            // **pixel
    img1->pixel_arr = malloc(sizeof(struct pixel*) * img1->header.height );

    for(int i = 0; i < img1->header.width; i++){
        img1->pixel_arr[i] = (struct pixel*) malloc(img1->header.width * sizeof(struct pixel));
    }

    img1->pixel_arr[19][0].r = 10;
    img1->pixel_arr[19][0].g = 20;
    img1->pixel_arr[19][0].b = 100;


    unsigned int gray = (img1->pixel_arr[19][0].r + img1->pixel_arr[19][0].g + img1->pixel_arr[19][0].b)/3;
    printf("divide by 3 %d \n",gray);

}