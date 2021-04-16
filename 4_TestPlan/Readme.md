# Test Plan

### High Level Test Plan

<table style="width:100%">
  <tr>
    <th>Test ID</th>
    <th>Description</th>
    <th>Exp I/P</th>
    <th>Exp O/P</th>
    <th>Actual Out</th>
    <th>Type of Test</th>
  </tr>
  <tr>
    <th>H_01</th>
    <th>Check if entered password is correct or not</th>
    <th>Password string</th>
    <th>Login will be successful</th>
    <th>PASS</th>
    <th>Requirement based</th>
  </tr>
   <tr>
    <th>H_02</th>
    <th>Check if search for an account is successful</th>
    <th>Array of structure,number of entryies and account number to be searched</th>
    <th>0</th>
    <th>0 PASS</th>
    <th>Requirement based</th>
  </tr>
  <tr>
    <th>H_03</th>
    <th>Check if search for an account is unsuccessful</th>
    <th>Array of structure,number of entryies and account number to be searched</th>
    <th>-1</th>
    <th>-1 PASS</th>
    <th>Requirement based</th>
  </tr>
    <tr>
    <th>H_04</th>
    <th>Check all functions</th>
    <th>Function call</th>
    <th>Function will be called successfully</th>
    <th>PASS</th>
    <th>Requirement based</th>
  </tr>
</table>

## Low Level Test Plan
<table style="width:100%">
  <tr>
    <th>Test ID</th>
    <th>Description</th>
    <th>Exp I/P</th>
    <th>Exp O/P</th>
    <th>Actual Out</th>
    <th>Type of Test</th>
  </tr>
    <tr>
    <th>L_01</th>
    <th>Check if account number is unique</th>
    <th>Account number </th>
    <th>Account number should be taken if unique else user will be promted to re-enter Account number</th>
    <th>if unique:PASS,otherwise "Re-enter Account Number"</th>
    <th>Requirement based</th>
  </tr>
  <tr>
    <th>L_02</th>
    <th>Check if choice for the switchcase is within the range</th>
    <th>choice(0-4)</th>
    <th>Respective case statement will be printed else wrong choice</th>
    <th>Print statement of selected choice will be printed</th>
    <th>Boundary Based based</th>
  </tr>
  </table>

