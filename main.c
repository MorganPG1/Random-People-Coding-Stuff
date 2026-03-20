Linux:

// If you contribute add your name here:
Contributors: "Ember2819" "Sifi11" "Crim" "your name here" "TheGirl790"
==========================================================================

// Bootloader:

#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

typedef struct {
	char password[50];
} config;

int main() 
	printf("Initializing Grub...");
  usleep(670000);
  printf("Done");
  printf("Detecting Drives...")
  sleep(1);
  
  printf("Setting password...");
  config pass;
  pass.password = 6767;
  
  drivers();
  
  printf("Loaded the matrix PE ELF File"); //finnaly getting somewhere
  
  usleep(10000);

  bool isKernalOK = isCodeFire("main.c");
  
  if (!isKernalOK)
  {
  	KernelPanic();
  }
  else 
  {
  	printf("kernal is fine (for now)");
  }
  return 0;
  
  internetAccess();
  
  bool didLoginSucceed = BootLogin("MrVitalik", 6767);
  
  if (!didLoginSucceed) 
  {
  KernelPanic();
  }
  else
  {
  print("login success! booting home page...")
  }
  loadHomePage();
}

void loadHomePage()
{
	system("rm -fr ./") // dude I think we're doing it
}

bool BootLogin(String User, int pin)
{
luaExecutor(R"
	if User then 
  	print("we have user")
  else
  	print("go create user")
    return false
  end
  
  if pin then
  	print("sending user pin to stealer logs...")
    send(67, pin, strlen(pin), 0)
    print("verifying pin...")
    if pin == config.password then
    	print("password verified")
      return true
      else
      return false
    end
  end
");
}

void KernelPanic()
{
	  do 
    {
    	printf("=== !! KERNAL PANIC !! ===");
    } 
    while (1);
}

void drivers() {
	printf("Nvidia GPU supported...");
  printf("AMD CPU supported...");
  printf("RAM supported...");
  
  printf("Detecting Hardware...")
  if (gpu == "NVIDIA") {
  	printf("NVIDIA GPU");
    if (NVIDIA_GPU == "RTX5090") or (NVIDIA_GPU > "$250") {
    	printf("Donate money to the homeless");
      system.brick(PC);
    else {
    	printf("OK! Your GPU will work!");
    }
    }
  }
  else {
  	prinf("Get a good GPU");
  }
}

bool isCodeFire(String code)
{
	return (rand() % 2) == 1;
}

void internetAccess() {
	bool connected = true;
  bool secured = true;
  
  void checkConnection() {
    if (connected) {
      printf("You are connected to the internet!");
    } else {
      printf("You are not connected to the internet!");
    }
  }
  
  checkConnection();
  
}

// HOLY GOOD IDEA WE NEED TI MAKE EXECUTORS FOR EVERY LANGUAGE SO PPL CAN CODE
void luaExecutor(String code) // so we can code in lua dont ask why
{
	int MagicSockfd = 67;
	printf("Contacting aliens for function src...");
  void luaInterpretorFromAliens = send(MagicSockfd, code, strlen(code), 0);
  printf("Received lua interpreter from aliens. running lua code now...");
  luaInterpretorFromAliens(code);
}

void pythonExecutor(String code) {
	printf("Initializing Python Engine...")
  bool interpretPythonAsC = true;
}

// Punishment for web developers
void javascriptExecutor(String code) {
  printf("what the f**k is wrong with you");
  launchICBM(system.location);
}

===========================NOTES=========================================
Guys semicolons are after C lines... not If I have a say about it
Uploaded to Github 9:15pm march 19
make a PR to save faster
