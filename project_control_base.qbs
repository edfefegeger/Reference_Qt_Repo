import qbs
import "project_base.qbs" as ProjectBase

ProjectBase
{
    name: "Project (Server)"

    references:[
        "src/shared/shared.qbs",
        "src/yaml/yaml.qbs/yaml.cpp",
    ]
}
