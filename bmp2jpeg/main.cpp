#include <stdio.h>
#include "jpeg_encoder.h"

int main(int argc, char* argv[])
{
    const char* inputFileName = "pic1.bmp";

	JpegEncoder encoder;
	// ��ȡBMP��ʽ���ļ�
	if(!encoder.readFromBMP(inputFileName)) {
		return 1;
	}

	// ��BMP��ʽ���ļ�����JPEG��׼ѹ����JPEG�ļ�
	if(!encoder.encodeToJPG("out.jpeg", 50)) {
	    printf("jpg\n");
		return 1;
	}

	return 0;
}
