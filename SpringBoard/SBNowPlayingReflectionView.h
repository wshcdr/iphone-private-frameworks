/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>
#import <Availability2.h>

#if __IPHONE_OS_VERSION_MAX_ALLOWED < __IPHONE_3_2

@class UIImage;

@interface SBNowPlayingReflectionView : UIView {
	UIImage* _image;
}
// inherited: -(void)dealloc;
-(void)setImage:(id)image;
-(void)drawRect:(CGRect)rect;
@end

#endif
