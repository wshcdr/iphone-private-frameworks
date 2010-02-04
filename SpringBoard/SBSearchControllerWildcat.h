#import <Availability2.h>

#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
#import "SBSearchController.h"

@interface SBSearchControllerWildcat : SBSearchController {
	void* _addressBook;
}
// inherited: -(void)dealloc;
// inherited: -(void)controllerWasDeactivated;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
// inherited: -(void)_populateCell:(id)cell withSearchResult:(id)searchResult;
-(id)_auxiliaryTitleForABRecordID:(int)abrecordID;
@end

#endif
