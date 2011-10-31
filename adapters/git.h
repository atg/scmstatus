// Gets the SCM status and applies to to SCMContext
static void git_status(SCMContext* ctx)
{
  
}

// Decides whether a list of files is an SCM directory
static BOOL git_detect(NSString* path, NSSet* filenames)
{
  return [filenames containsObject:@"git"];
}