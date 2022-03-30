# Test Plan and Test Ouput

|  Test ID |   HLT Id   |                                    Description                                  |      Exp IN     |   Exp OUT   |    Actual OUT   |  PASS/FAI |
|----------|------------|---------------------------------------------------------------------------------|-----------------|-------------|-----------------|-----------|
|   T_01   |    H_01    | Provide required details for login to book a ticket                             |  password       |
|   T_02   |    H_01    | When wrong password is entered                                                  |  password       |
|   T_03   |    H_02    | Display the details of movie available                                          | Enter choice    |
|   T_04   |    H_02    | Purchase a ticket for the movie available                                       | Enter choice    |
|   T_05   |    H_03    | Summary of a ticket for purchased movie                                         | Enter choice    |
|   T_06   |    H_04    | Cancel a ticket                                                                 |  ID number      |
|   T_07   |    H_03    | Change the price of ticket (only admin)                                         |  password       |
|   T_08   |    H_03    | Change the price of ticket after login (only admin)                             |enter new price  |
|   T_09   |    H_03    | When wrong password is entered while Changing the price of ticket (only admin)  |  password       |
|   T_10   |    H_05    | To view the reserved ticke                                                      |  password       |
|   T_11   |    H_05    | When wrong password is entered to view the reserved ticket                      | Correct Password|
