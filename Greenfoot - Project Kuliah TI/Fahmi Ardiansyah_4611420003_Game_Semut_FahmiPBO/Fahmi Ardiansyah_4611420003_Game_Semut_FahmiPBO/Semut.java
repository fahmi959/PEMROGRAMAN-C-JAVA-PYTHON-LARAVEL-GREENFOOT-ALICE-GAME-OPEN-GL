import lang.stride.*;
import greenfoot.*;

/**
 * Write a description of class Semut here.
 * @author (your name) @version (a version number or a date)
 */
public class Semut extends Actor
{
    private int score = 0;

    /* (World, Actor, GreenfootImage, Greenfoot and MouseInfo)*/

    /**
     * Act - do whatever the Semut wants to do. This method is called whenever the 'Act' or 'Run' button gets pressed in the environment.
     */
    public void act()
    {
        move(3);
        if (Greenfoot.isKeyDown("left")) {
            turn(-4);
        }
        if (Greenfoot.isKeyDown("right")) {
            turn(4);
        }
        makanPizza();
    }

    /**
     * 
     */
    public void makanPizza()
    {
        if(isTouching(pizza.class)){
            removeTouching(pizza.class);
            score = score + 1;
            getWorld().showText("Score: " + score, 100, 30);
        }
        if (score == 10){
            Greenfoot.setWorld(new Win());
        }
    }
}
