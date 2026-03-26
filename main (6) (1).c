#include <kipr/wombat.h>

int main()
{
    enable_servos();
    //Robot will opem gate and move left for 1.2 secomds
    set_servo_position(0, 1702);
    set_servo_position(1,2000);
    motor(0,100);
    motor(1,100);
    motor(2,-100);
    motor(3,-100);
    msleep(1200);
    
    // Robot will move backwords to make sure it is allined to get the pom poms
    motor(0,-100);
 	motor(1,-100);
    motor(2,-100);
    motor(3,-100);
    msleep(500);
    
    // motors will stop then move the bin down and open the gate
    ao();
    msleep(250);
    enable_servos();
    set_servo_position(0, 1842);
    msleep(1000);
    set_servo_position(1, 0);
    msleep(1000);

    motor(0, 100);
    motor(1, 100);
    motor(2, 100);
    motor(3, 100);
    msleep(2000); // Move the robot to push the poms

    motor(0, -100);
    motor(1, -100);
    motor(2, -100);
    motor(3, -100);
    msleep(1700); // Move the robot back to drop down the arm

    ao();
    set_servo_position(0, 0); // drop down the arm to grab and get the poms
    msleep(1600);

    motor(0, 100);
    motor(1, 100);
    motor(2, 100);
    motor(3, 100);
    msleep(2670); // Move the robot to push the poms and grab it with the gate

    ao();
    set_servo_position(1, 1234);
    msleep(1400);

    motor(0, -100);
    motor(1, -100);
    motor(2, -100);
    motor(3, -100);
    msleep(930); // Move the robot back to push the red block

    ao();
    set_servo_position(0, 280);
    msleep(500);
    printf("Hello World\n");

    motor(0,100);
    motor(3,100);
    msleep(520);// Move the robot back to open the gate and push the red cube

    motor(0, 100);
    motor(1, 100);
    motor(2, 100);
    motor(3, 100);
    msleep(2740); // Move the robot forward to push the red cube

    motor(0, -100);
    motor(1, -100);
    motor(2, -100);
    motor(3, -100);
    msleep(1300); // Move the robot back

    ao();
    set_servo_position(0, 633);
    msleep(500);
    printf("Hello World\n");
    motor(1, 100);
    motor(2, 100); // Turn left to let the robot go down the hill
    msleep(920);


    motor(0, -100);
    motor(1, 100);
    motor(2, 100);
    motor(3, -100);
    msleep(2000); // Move the robot forward to go down the hill

    ao();
    motor(0, -100);
    motor(3, -100); // Turn right to reposition 
    msleep(700);

    motor(0, -100);
    motor(1, 100);
    motor(2, 100);
    motor(3, -100);
    msleep(2900); // Move the robot again forward to go down the hill

    ao();
    motor(0, -100);
    motor(3, -100); // Turn right to get the poms 
    msleep(2800);

    ao();
    set_servo_position(0, 0); // drop down the arm to grab and get the poms
    msleep(1000);
    set_servo_position(1, 0); // open the gate to grab more poms
    msleep(1000);

    motor(0, -100);
    motor(1, 100);
    motor(2, 100);
    motor(3, -100);
    msleep(1234); // Move the robot again forward to get more poms

    ao();
    set_servo_position(1, 1146); // close the gate to grab  poms
    msleep(1000);
    set_servo_position(0, 604); // open the gate to grab more poms
    msleep(1000);

    motor(0, -100);
    motor(3, -100); // Turn right to get the poms 
    msleep(2700);
    
    motor(0, -100);
    motor(1, 100);
    motor(2, 100);
    motor(3, -100);
    msleep(900); // Move the robot again forward to get more poms
    
    motor(0, 100);
    motor(1, -100);
    motor(2, -100);
    motor(3, 100);
    msleep(2300); // Move the robot back
    
    ao();
    set_servo_position(0, 0); // drop down the arm to grab and get the poms
    msleep(1000);
    set_servo_position(1, 0); // open the gate to grab more poms
    msleep(1000);
    
    motor(0, -100);
    motor(1, 100);
    motor(2, 100);
    motor(3, -100);
    msleep(1400); // Move the robot again forward to get more poms
    
    ao();
    set_servo_position(1, 1200); // open the gate to grab more poms
    msleep(1000);
    return 0;
}
