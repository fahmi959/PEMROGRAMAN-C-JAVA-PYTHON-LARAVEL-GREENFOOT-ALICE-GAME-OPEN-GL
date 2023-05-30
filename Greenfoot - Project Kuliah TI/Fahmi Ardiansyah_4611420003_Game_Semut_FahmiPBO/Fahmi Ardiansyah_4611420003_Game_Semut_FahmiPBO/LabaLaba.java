import lang.stride.*;
import java.util.*;
import greenfoot.*;

/**
 * 
 */
public class LabaLaba extends Actor
{

    /**
     * Act - do whatever the Cicak wants to do. This method is called whenever the 'Act' or 'Run' button gets pressed in the environment.
     */
    public void act()
    {
        move(3);
        if (Greenfoot.getRandomNumber(100) < 10) {
            turn(Greenfoot.getRandomNumber(15) - 30);
        }
        makanSemut();
    }

    /**
     * 
     */
    public void makanSemut()
    {
        if (isTouching(Semut.class)) {
            removeTouching(Semut.class);
            Greenfoot.setWorld(new Lose());
        }
    }
}
