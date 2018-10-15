function [theta1,theta2,theta3] = GetJointAngles(x,y,z)
%Returns Joint Angle to reach the (x,y,z) coordinates in the Space using Inverse Kinematics.
%   Enter (x,y,z)
% h= height of the Hexapod Platform
% l1, l2, l3 are the lengths of Coxa, Femur, Tibia respectively.
h=5;
l1=5;
l2=7;
l3=13;
theta1=atan(y/x);
r=x/cos(theta1);
theta2= -(asin((z-h)/l1));
theta3=acos((((r-l1)^2)+((z-h)^2)-(l3^2)-(l2^2))/(2*l2*l3));
display(theta1*180/pi);
display(theta2*180/pi);
display(theta3*180/pi);
end