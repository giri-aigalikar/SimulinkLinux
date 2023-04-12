addpath(genpath('/home/giri/Documents/JenkinTest/src'));
load_system('Jenkins_brake');
set_param('Jenkins_brake','LaunchReport','off');
try
	rtwbuild('Jenkins_brake');
catch
	%warning('Error while building Model1');
% 	exit(1);
end
save_system('Jenkins_brake');
close_system('Jenkins_brake');
