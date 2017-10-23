#-*-coding:utf-8-*-

import pygame
from pygame.locals import*
import sys

def main():
    pygame.init()
    screen = pygame.display.set_mode((800, 600))
    pygame.display.set_caption("Pygame_Test")

    while(1):
        screen.fill((0,0,0))
        pygame.display.update()

        for event in pygame.event.get():
            if event.type==QUIT:
                pygame.quit()
                sys.exit()

if __name__=="__main__":
    main()