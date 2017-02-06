#ifndef D_testBuildTime_H
#define D_testBuildTime_H

///////////////////////////////////////////////////////////////////////////////
//
//  testBuildTime is responsible for recording and reporting when
//  this project library was built
//
///////////////////////////////////////////////////////////////////////////////

class testBuildTime
  {
  public:
    explicit testBuildTime();
    virtual ~testBuildTime();
    
    const char* GetDateTime();

  private:
      
    const char* dateTime;

    testBuildTime(const testBuildTime&);
    testBuildTime& operator=(const testBuildTime&);

  };

#endif  // D_testBuildTime_H
