PImage img, qr;

void setup() {
  img=loadImage("data/myMark.jpg");
  img.resize(img.width/2, img.height/2); 
  size(img.width, img.height);
  qr = loadImage("data/1482776674629227.png");
  qr.resize(height, height);
  image(img, 0, 0);
  image(qr, width/2-qr.width/2, 0);
  loadPixels();
  img.loadPixels();
  for (int x=0; x<width; x++) {
    for (int y=0; y<height; y++) {
      int i=y*width+x;
      if (i%2!=0) {        
        pixels[i]=img.pixels[i];
      } else {
        pixels[i]=pixels[i];
      }
    }
  }
  updatePixels();
  save("pic_skr.png");
}

