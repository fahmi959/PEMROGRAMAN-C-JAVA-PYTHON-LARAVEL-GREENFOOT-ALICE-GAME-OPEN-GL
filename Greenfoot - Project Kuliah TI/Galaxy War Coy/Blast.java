import greenfoot.*;  // (World, Actor, GreenfootImage, Greenfoot and MouseInfo)

/**
 * Write a description of class Blast here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */


public class Blast extends Actor
{       
    /**
     * Act - do whatever the Blast wants to do. This method is called whenever
     * the 'Act' or 'Run' button gets pressed in the environment.
     */
       int timer = 0;
    public void act()
    {
        // Add your action code here.
        timer++;
     
    if (timer == 5) {
        getWorld().removeObject(this);
       Greenfoot.playSound("blast.wav");
    }
    
    }
    }
    

