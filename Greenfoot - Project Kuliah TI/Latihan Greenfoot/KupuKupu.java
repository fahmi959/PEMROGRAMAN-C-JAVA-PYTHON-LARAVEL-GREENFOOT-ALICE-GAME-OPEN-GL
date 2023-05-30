import greenfoot.*;  // (World, Actor, GreenfootImage, Greenfoot and MouseInfo)

/**
 * Write a description of class KupuKupu here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class KupuKupu extends Actor
{
    /**
     * Act - do whatever the KupuKupu wants to do. This method is called whenever
     * the 'Act' or 'Run' button gets pressed in the environment.
     */
    public void act()
    {
        // Add your action code here.

        
        if (Greenfoot.isKeyDown("up")){
         move(3);
    }
    
     if (Greenfoot.isKeyDown("down")){
         move(-2);
    }
    
     if (Greenfoot.isKeyDown("right")){
         turn(3);
    }
    
    if (Greenfoot.isKeyDown("left")){
         turn(-3);
    }
}
}
