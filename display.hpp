#include <png.h>
#include <stdio.h>

public class Display{

    struct Pixel {
	        png_byte r, g, b, a;
        };

    struct Pixel *pixel_pointers[HEIGHT];

    public:
    void Print(){
        png_structp png_ptr;
	png_infop info_ptr;

	png_ptr = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);
	if (!png_ptr) {
		fprintf(stderr, "could not initialize png struct\n");
		return 1;
	}

	info_ptr = png_create_info_struct(png_ptr);
	if (!info_ptr) {
		png_destroy_write_struct(&png_ptr, (png_infopp)NULL);
		fclose(f);
		return 1;
	}

	/* begin writing PNG File */
	png_init_io(png_ptr, f);
	png_set_IHDR(png_ptr, info_ptr, WIDTH, HEIGHT, COLOR_DEPTH,
	             PNG_COLOR_TYPE_RGB_ALPHA, PNG_INTERLACE_NONE,
	             PNG_COMPRESSION_TYPE_DEFAULT, PNG_FILTER_TYPE_DEFAULT);
	png_write_info(png_ptr, info_ptr);
        /* write image data to disk */
        png_write_image(png_ptr, (png_byte **)pixel_pointers);

        /* finish writing PNG file */
        png_write_end(png_ptr, NULL);
        	/* close the file */
	    fclose(f);
	    f = NULL;
        
	/* clean up PNG-related data structures */
	png_destroy_write_struct(&png_ptr, &info_ptr);
    }

    void DrawBoard(Board board){
        DrawGrid()
        for(){
            for(){
                DrawCell()
            }
        }
    }
    void DrawCell(Cell cell){
        const int CELL_SIZE = 5;
        const int GRID_GAP = 1;
        
        int  
        int cell_y =

        for (int col = cell.x * (CELL_SIZE + GRID_GAP); col < cell.x * (CELL_SIZE + GRID_GAP) + CELL_SIZE; col++) {
            for (int row = cell.y * (CELL_SIZE + GRID_GAP); row < cell.y * (CELL_SIZE + GRID_GAP) + CELL_SIZE; row++) {
                pixel_pointers[row][col] = Pixel;
            }
        }

        /* write image data to disk */
        png_write_image(png_ptr, (png_byte **)pixel_pointers);

        /* finish writing PNG file */
        png_write_end(png_ptr, NULL);

        /* clean up PNG-related data structures */
        png_destroy_write_struct(&png_ptr, &info_ptr);

        /* close the file */
        fclose(f);
        f = NULL;

    }

    void DrawGrid(){

    }

    Display(){
        #define PNG_SETJMP_NOT_SUPPORTED    
        //const int WIDTH = (Cell.size + Gap) * cell number - gap
        const int HEIGHT 32
        #define COLOR_DEPTH 8

        

        for (int row = 0; row < HEIGHT; row++) {
            pixel_pointers[row] = (Pixel*)calloc(WIDTH*2, sizeof(struct Pixel));
        }

            int argc, char *argv[]

	        /* open PNG file for writing */
	        FILE *f = fopen("out.png", "wb");
            if (!f) {
                fprintf(stderr, "could not open out.png\n");
                return;
            }

        /* initialize png data structures */
        png_structp png_ptr;
        png_infop info_ptr;

        png_ptr = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);
        if (!png_ptr) {
            fprintf(stderr, "could not initialize png struct\n");
            return;
        }

        info_ptr = png_create_info_struct(png_ptr);
        if (!info_ptr) {
            png_destroy_write_struct(&png_ptr, (png_infopp)NULL);
            fclose(f);
            return;
        }
    }
}