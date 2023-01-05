#include <iostream>
#include <stdio.h>
/*--------------------------------------------------------
 * 궤도점유
 * 열차는 시작궤도부터 순차적으로 궤도를 점유해야 합니다.
 * 궤도순차점유가 되지 않았을때 점유되어야할 궤도 인덱스를 리턴하시오
 * 점유 : 0
 * 비점유 : 1
 *---------------------------------------------------------*/
int main(void) {
#define TRACK_MAX 5
	uint8_t indexToBeOccupied = 0;
    uint8_t occupiedIndex = 0;
	uint8_t index = 0;
	char acUpTrackList[TRACK_MAX] = {0, 1, 0, 1, 1};
	char acDnTrackList[TRACK_MAX] = {0, 1, 0, 1, 1};
	while (1) {
		if (acDnTrackList[index] == 0) {
			if (indexToBeOccupied != index) {
				// std::cout << "R Lamp ON" << std::endl;
				printf("R Lamp ON\r\n");
				// std::cout << "beOccupied : " << beOccupied << std::endl;
				printf("indexToBeOccupied : %d\r\n", indexToBeOccupied);
                printf("occupiedIndex : %d\r\n", occupiedIndex);
				break;
			} else {
				indexToBeOccupied = index + 1;
			}
		}
		index++;
        occupiedIndex = index;

        if(index >= TRACK_MAX)
            index = 0;
	}
	return 0;
}