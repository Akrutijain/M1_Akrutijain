# Test Plan and Test Ouput

|  Test ID |   HLT Id   |                                    Description                                |      Exp IN    |   Exp OUT   |    Actual OUT   | PASS/FAIL|
|----------|------------|-------------------------------------------------------------------------------|----------------|-------------|-----------------|----------|
|   T_01   |    H_01    | Provide required details for login to book a ticket                           |  password      |Successfully logined In |
|   T_02   |    H_01    | When wrong password is entered                                                |  password      |Entered Password is wrong |
|   T_03   |    H_02    | Display the details of movie available                                        | Enter choice   |Display list |
|   T_04   |    H_02    | Purchase a ticket for the movie available                                     | Enter choice   |ThankYou for Booking Ticket |
|   T_05   |    H_03    | Summary of a ticket for purchased movie                                       | Enter choice   |Booking ID,Customer name,Show Name,Hallno,Price |
|   T_06   |    H_04    | Cancel a ticket                                                               |  ID number     |Your ticket is cancelled |
|   T_07   |    H_03    | Change the price of ticket (only admin)                                       |  password      |Please enter new price |
|   T_08   |    H_03    | Change the price of ticket after login (only admin)                           |enter new price |Price Updated Successfully |
|   T_09   |    H_03    | When wrong password is entered while Changing the price of ticket (only admin)|  password      |Entered Password is wrong |
|   T_10   |    H_05    | To view the reserved ticke                                                    |  password      |summary of tickeT |
|   T_11   |    H_05    | When wrong password is entered to view the reserved ticket                    |Correct Password|Entered Password is wrong |