#import "ImmediatePanGestureRecognizer.h"
#import <UIKit/UIGestureRecognizerSubclass.h>

@implementation ImmediatePanGestureRecognizer

- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event {
    [super touchesBegan:touches withEvent:event];
    self.state = UIGestureRecognizerStateBegan;
}

@end
